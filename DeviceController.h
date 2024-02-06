#ifndef DEVICECONTROLLER_H
#define DEVICECONTROLLER_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>


class DeviceController : public QObject
{
    Q_OBJECT
public:
    explicit DeviceController(QObject *parent = nullptr);
    void connectToDevice(QString ip, int port);
    void disconnect();
    QAbstractSocket::SocketState state();
    bool isConnected();
    void send(QString message);
signals:
  /*When some thing happen to the circuit we need to inform the colr or the other classes
   *that use this class as their controller to connect to the device */
   void connected();
   void disconnected();
   void stateChanged(QAbstractSocket::SocketState);
   void errorOccured(QAbstractSocket::SocketError);
   void dataReady(QByteArray);

private slots:
    void socket_stateChanged(QAbstractSocket::SocketState state);
    void socket_readyRead();



private:
 QTcpSocket _socket;
 QString _ip;
 int _port;
};

#endif // DEVICECONTROLLER_H
