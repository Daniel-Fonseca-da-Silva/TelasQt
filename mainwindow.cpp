#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnLoga, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->actionFechar, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionMinimizar, SIGNAL(triggered()), this, SLOT(showMinimized()));
    connect(ui->actionTela_Cheia, SIGNAL(triggered()), this, SLOT(showFullScreen()));
    connect(ui->actionMaximizar, SIGNAL(triggered()), this, SLOT(showMaximized()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
