#include "MyTCPServer.h"

MyTCPServer::MyTCPServer(int port ,QObject *parent) : QObject(parent)
{

    _server= new QTcpServer(this);
    connect(_server, &QTcpServer::newConnection, this, &MyTCPServer::on_client_connecting);
    _isStarted=_server->listen(QHostAddress::Any, port);
    if(!_isStarted){

        qDebug()<<"server can not start";

    }else{

        qDebug()<<"server started ...";

    }
}

bool MyTCPServer::isStarted() const
{

    return _isStarted;
}

void MyTCPServer::sendToAll(QString message)
{

    foreach (auto socket, _socketsList) {
           socket->write(message.toUtf8());
       }
}

void MyTCPServer::on_client_connecting()
{

    qDebug() << "a client connected to server";
     auto socket = _server->nextPendingConnection();
    connect(socket, &QTcpSocket::readyRead, this, &MyTCPServer::clientDataReady);
    connect(socket, &QTcpSocket::disconnected, this, &MyTCPServer::clientDisconnected);


    _socketsList.append(socket);
    socket->write("welcome to this server ");
    emit newClientConnected();

}

void MyTCPServer::clientDisconnected()
{
    emit clientDisconnect();

}

void MyTCPServer::clientDataReady()
{

    auto socket = qobject_cast<QTcpSocket *>(sender());
        auto data = QString(socket->readAll());
        emit dataReceived(data);
        foreach (auto s, _socketsList) {
            if (s != socket) {
                s->write(data.toUtf8());
            }
        }
}
