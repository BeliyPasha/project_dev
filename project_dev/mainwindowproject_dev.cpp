#include "mainwindowproject_dev.h"
#include "ui_mainwindowproject_dev.h"

MainWindowProject_dev::MainWindowProject_dev(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowProject_dev)
{
    ui->setupUi(this);
}

MainWindowProject_dev::~MainWindowProject_dev()
{
    delete ui;
}


void MainWindowProject_dev::on_pushButton_clicked()
{
    qDebug("Project_dev");
}

