#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStyle>
#include <QHostAddress>
#include "DeviceController.h"
#include<QAbstractSocket>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void discconnected();

private slots:
    void on_InIPAddress_textChanged(const QString &arg1);

    void on_btnConnect_clicked();

    void device_connected();
    void device_disconnected();

    void device_stateChanged(QAbstractSocket::SocketState);
    void device_errorOccured(QAbstractSocket::SocketError);
    void device_dataReady(QByteArray data);

    void on_btnClear_clicked();

    void on_btnSend_clicked();

private:
    Ui::MainWindow *ui;
    DeviceController _controller;/*device controller instance in the main window*/
    void  setDeviceController();

};
#endif // MAINWINDOW_H
