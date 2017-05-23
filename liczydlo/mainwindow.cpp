#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sum=0;
    operation=0;
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

}

void MainWindow::two_argument_clicked(){

    QPushButton* button = qobject_cast<QPushButton*>(sender());
    QString what=button->text();
    //double wynik;

    if(operation!=0){
        switch(operation){
            case 1: //dodawanie
                sum=sum+ui->display->text().toDouble();
            break;
            case 2: //odejmowanie
                sum=sum-ui->display->text().toDouble();
            break;
        case 3: //mnożenie
            break;
        case 4: //dzielenie
            sum=sum/ui->display->text().toDouble();

            break;
        }
        waitForOperand=1;
        ui->display->setText(QString::number(sum,'g',7));
        operation=button->property("type").toInt();

    }else{
        sum=ui->display->text().toDouble();
        operation=button->property("type").toInt();
        waitForOperand=1;
    }



};

void MainWindow::on_multiply_clicked()
{   //do poprawy jak wyżej
    if(sum==0){
        sum=ui->display->text().toDouble();
    }
    else
        sum*=ui->display->text().toDouble();
    ui->display->setText(QString::number(sum,'g',7));
    waitForOperand=1;
}



void MainWindow::on_change_charakter_clicked()
{

    sum=(-1)*ui->display->text().toDouble();
    ui->display->setText(QString::number(sum,'g',7));
    waitForOperand=1;

}

void MainWindow::on_clearAll_clicked()
{
    ui->display->clear();
}
