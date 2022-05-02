#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::RightButton)
    {
        ui->lineEdit->setText("Right button clicked");
    }
    else if(ev->button() == Qt::LeftButton)
    {
        ui->lineEdit->setText("Left Button Clicked");
    }

}

