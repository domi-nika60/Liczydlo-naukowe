#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sum=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mc_clicked()
{
    ui->display->clear();
    sum=0;
    //kasowanie pamieci etc etd
}


void MainWindow::on_c7_clicked()
{

}

void MainWindow::on_c2_clicked()
{

}
void MainWindow::digit_clicked(){
    if(waitForOperand){
        ui->display->clear();
        waitForOperand=0;
    }
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    ui->display->setText(ui->display->text()+button->text());
    return;
}

void MainWindow::on_divide_clicked()
{
    if(sum==0){
        sum=ui->display->text().toDouble();
    }
    else
        sum/=ui->display->text().toDouble();
    ui->display->setText(QString::number(sum,'g',7));
    waitForOperand=1;
}
