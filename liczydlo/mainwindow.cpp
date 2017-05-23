#include "mainwindow.h"
#include "ui_mainwindow.h"

expression e;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->c0, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->c1, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->c2, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->c3, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->c4, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->c5, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->c6, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->c7, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->c8, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->c9, SIGNAL(released()), this, SLOT(digit_pressed()));

    connect(ui->add, SIGNAL(released()), this, SLOT(binary_operator()));
    connect(ui->subtract, SIGNAL(released()), this, SLOT(binary_operator()));

    connect(ui->equal, SIGNAL(released()), this, SLOT(equals()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton * button = (QPushButton*) sender();

    e += (ui->label->text() + button->text());
    ui->label->setText(e.display());
}

void MainWindow::binary_operator()
{
    QPushButton * button = (QPushButton*) sender();
    if (button->text() == "+")
        e.binary('+');
    else if (button->text() == "-")
        e.binary('-');


    ui->label->setText(0);
}

void MainWindow::equals()
{
    ui->label->setText(QString::number(e.result(), 'g', 15));
}


