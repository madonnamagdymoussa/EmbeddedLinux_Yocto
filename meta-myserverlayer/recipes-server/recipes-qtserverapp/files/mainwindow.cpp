#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _server= nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_groupBox_clicked()
{

}

void MainWindow::on_btnStartServer_clicked()
{

    if(_server == nullptr){
        auto port = ui->spnServerPort->value();
        _server= new MyTCPServer(port);
        connect(_server, &MyTCPServer::dataReceived, this, &MainWindow::clientDataReceived);
        connect(_server, &MyTCPServer::clientDisconnect, this, &MainWindow::clientDisconnected);

        connect(_server, &MyTCPServer::newClientConnected, this, &MainWindow::newClient_connected);
    }
    //auto state=(_server->isStarted()) "1" : "0";
    auto state = (_server->isStarted())? "1" : "0";
        ui->lblConnectionStatus->setProperty("state", state);
        style()->polish(ui->lblConnectionStatus);

}

void MainWindow::newClient_connected()
{
    ui->lstConsole->addItem("New Client connected");

}

void MainWindow::on_groupBox_2_clicked()
{

}


void MainWindow::on_btnSendToAll_clicked()
{
    auto message = ui->InMessage->text().trimmed();
    _server->sendToAll(message);
}

void MainWindow::clientDisconnected()
{

     ui->lstConsole->addItem("Client Disconnected");
}

void MainWindow::clientDataReceived(QString message)
{

    ui->lstConsole->addItem(message);

   if (message == "led on") {

        QPixmap pixmap("/root/usr/pictures/ledOn2.png");  // Replace with actual image path

        ui->ledImageLabel->setPixmap(pixmap.scaled(300,300));
        ui->lstConsole->addItem("led on picture displayed");
    }
   if (message == "led off") {

        QPixmap pixmap("/root/usr/pictures/led_off.png");  // Replace with actual image path

        ui->ledImageLabel->setPixmap(pixmap.scaled(300,300));
        ui->lstConsole->addItem("led off picture displayed");
    }


}
