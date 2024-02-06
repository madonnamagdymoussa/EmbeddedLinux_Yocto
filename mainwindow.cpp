#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHostAddress>
#include <QAbstractSocket>
#include <QStyle>
#include "DeviceController.h"
#include <QMetaEnum>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setDeviceController();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*Check if the IP is Valid*/
void MainWindow::on_InIPAddress_textChanged(const QString &arg1)
{
    /*create instance of QHostAddress based on Arg1*/

  QString state="0";

  if(arg1 == "..."){
      state="";
   }

  else{
    QHostAddress address(arg1);

    if(address.protocol() == QAbstractSocket::IPv4Protocol) {
        state="1";
    }

  }

    ui->InIPAddress->setProperty("state",state);

    /*The polish() function is a mechanism for dynamically adjusting widget appearance based on property changes or state updates,
     * ensuring a consistent and visually meaningful representation of data.*/

    /*1. Accessing the Style Object:
     style(): This method accesses the current style object associated with the widget.
    The style object encapsulates the visual appearance of widgets in a Qt application.

     2. Applying Style Updates:
        polish(ui->InIPAddress): This function calls the polish() method on the style object, passing the InIPAddress widget as an argument. The polish() method performs the following actions:
        Recalculates Style Hints: It reevaluates the widget's style hints based on its current properties and state. Style hints are key-value pairs that provide instructions to the style engine on how to render the widget.
        Updates Appearance: It applies necessary changes to the widget's visual appearance based on the recalculated hints and the current style's rules. This might involve adjusting colors, fonts, borders, or other visual elements.*/
    style()->polish(ui->InIPAddress);

}

void MainWindow::on_btnConnect_clicked()
{
    if(_controller.isConnected()){
        _controller.disconnect();
    }else{

        auto ip= ui->InIPAddress->text();
        auto port = ui->spnPort->value();
        _controller.connectToDevice(ip,port);/*device controller instance in the main window*/

    }


}

void MainWindow::device_connected()
{
    ui->lstConsole->addItem("Connected To Device");
    ui->btnConnect->setText("Disconnect");
    ui->grpSendData->setEnabled(true);

}

void MainWindow::device_disconnected()
{

    ui->lstConsole->addItem("disconnect from the device");
    ui->btnConnect->setText("Connect");


}

void MainWindow::device_stateChanged(QAbstractSocket:: SocketState state)
{    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketState >();
     ui->lstConsole->addItem(metaEnum.valueToKey(state));


}

void MainWindow::device_errorOccured(QAbstractSocket::SocketError error)
{
    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketError >();
    ui->lstConsole->addItem(metaEnum.valueToKey(error));
}

void MainWindow::device_dataReady(QByteArray data)
{
    ui->lstConsole->addItem(QString(data));
}

void MainWindow::setDeviceController(){

    connect(&_controller, &DeviceController::connected, this, &MainWindow::device_connected);
    connect(&_controller, &DeviceController::disconnected, this, &MainWindow::device_disconnected);
    connect(&_controller, &DeviceController::stateChanged, this, &MainWindow::device_stateChanged);
    connect(&_controller, &DeviceController::dataReady, this, &MainWindow::device_dataReady);


}

void MainWindow::on_btnClear_clicked()
{

}

void MainWindow::on_btnSend_clicked()
{
    auto message = ui->InMessage->text().trimmed();
    _controller.send(message);
}
