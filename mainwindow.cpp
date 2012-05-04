#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    N = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnTest_clicked()
{
    N++;
    qDebug()<<"Button pressed"<<N<<"times!";
}
