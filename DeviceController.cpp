#include "DeviceController.h"



/*********************************************************Target of this file***********************************************************************/
/*manage connectivity and trasmitting data to the device or server and recieve data from the server and parse it and generate appropriate data
  from the server and parse it and generate appropriate data from our window*/
/**************************************************************************************************************************************************/


DeviceController::DeviceController(QObject *parent) : QObject(parent)
{

    connect(&_socket, &QTcpSocket::connected, this, &DeviceController::connected);
    connect(&_socket, &QTcpSocket::disconnected, this, &DeviceController::disconnected);
    connect(&_socket, &QTcpSocket::stateChanged, this, &DeviceController::socket_stateChanged);
    connect(&_socket, &QTcpSocket::readyRead, this, &DeviceController::socket_readyRead);

    //connect(&_socket, &QTcpSocket::errorOccurred, this, &DeviceController::errorOccurred);
    //connect(&_socket, &QTcpSocket::error, this, &DeviceController::errorOccured);
    //connect(&_socket, &QTcpSocket::SocketError, this, &DeviceController::errorOccured);
    //connect(&_socket, &QTcpSocket::errorOccurred, this, &DeviceController::errorOccurred);

}

void DeviceController::connectToDevice(QString ip, int port)
{
  if(_socket.isOpen()){

    if(ip == _ip && port == _port){

        return; /*device is already connected to that ip and port*/
    }
    _socket.close(); /*if the device is open and the IPM ports are something different try to close the device */

  }

  /*************Connect to device one more time*************/

  _ip=ip;
  _port=port;
  _socket.connectToHost(_ip,_port);
}

void DeviceController::disconnect()
{
    _socket.close();
}



void DeviceController::socket_stateChanged(QAbstractSocket::SocketState state)
{
    if (state == QAbstractSocket::UnconnectedState) {
        _socket.close();
    }
    emit stateChanged(state);/*to inform the other layers about what happed here*/
}

void DeviceController::socket_readyRead()
{
    auto data = _socket.readAll();
    emit dataReady(data);

}

QAbstractSocket::SocketState DeviceController::state()
{

    return _socket.state();
}

bool DeviceController::isConnected()
{
    return _socket.state()== QAbstractSocket::ConnectedState;
}

void DeviceController::send(QString message)
{
  _socket.write(message.toUtf8());
}



