#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "configwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap cyberpatriotLogo("C:/Users/Bill/Documents/Qt_Projects/Cyberpatriot_Scoring_Engine_Server/cyberpatriot_logo.jpg");
    ui->cyberLogo->setPixmap(cyberpatriotLogo);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_configureButton_clicked()
{
    // Add functionality for what will happen when "Configure Image" button is clicked
    configWindow config;
    config.setModal(true);
    config.setWindowTitle("Image Configuration Tool");
    config.exec();
}

void MainWindow::on_deleteButton_clicked()
{
    // Add functionality for delete button
}

void MainWindow::on_runButton_clicked()
{
    // Add functionality for run server button
}
