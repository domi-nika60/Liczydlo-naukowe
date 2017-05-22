#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->c0, SIGNAL(released()), this, SLOT(on_digit_pressed()));
    connect(ui->c1, SIGNAL(released()), this, SLOT(on_digit_pressed()));
    connect(ui->c2, SIGNAL(released()), this, SLOT(on_digit_pressed()));
    connect(ui->c3, SIGNAL(released()), this, SLOT(on_digit_pressed()));
    connect(ui->c4, SIGNAL(released()), this, SLOT(on_digit_pressed()));
    connect(ui->c5, SIGNAL(released()), this, SLOT(on_digit_pressed()));
    connect(ui->c6, SIGNAL(released()), this, SLOT(on_digit_pressed()));
    connect(ui->c7, SIGNAL(released()), this, SLOT(on_digit_pressed()));
    connect(ui->c8, SIGNAL(released()), this, SLOT(on_digit_pressed()));
    connect(ui->c9, SIGNAL(released()), this, SLOT(on_digit_pressed()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
