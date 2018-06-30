#include "mainwindow.h"
#include "ui_mainwindowForm.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() <<"This is a test";
}

MainWindow::~MainWindow()
{
    delete ui;
}
