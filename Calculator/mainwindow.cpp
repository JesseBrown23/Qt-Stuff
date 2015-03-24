#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore/QCoreApplication>

QString value = "", total = "";
int fNum, sNum;
bool addBool = false, subBool = false, multBool = false, divBool = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent){

        label = new QLabel("0", this);
        label -> setGeometry(QRect(QPoint(50,25), QSize(200,200)));

        clear_button = new QPushButton("C", this);
        clear_button -> setGeometry(QRect(QPoint(100,300), QSize(50,50)));
        connect(clear_button, &QAbstractButton::released, this, &MainWindow::clear);

        equals_button = new QPushButton("=", this);
        equals_button -> setGeometry(QRect(QPoint(150,300), QSize(50,50)));
        connect(equals_button, &QAbstractButton::released, this, &MainWindow::equals);

        add_button = new QPushButton("+", this);
        add_button -> setGeometry(QRect(QPoint(200,150), QSize(50,50)));
        connect(add_button, &QAbstractButton::released, this, &MainWindow::add);

        subtract_button = new QPushButton("-", this);
        subtract_button -> setGeometry(QRect(QPoint(200,200), QSize(50,50)));
        connect(subtract_button, &QAbstractButton::released, this, &MainWindow::subtract);

        multiply_button = new QPushButton("*", this);
        multiply_button -> setGeometry(QRect(QPoint(200,250), QSize(50,50)));
        connect(multiply_button, &QAbstractButton::released, this, &MainWindow::multiply);

        divide_button = new QPushButton("/", this);
        divide_button -> setGeometry(QRect(QPoint(200,300), QSize(50,50)));
        connect(divide_button, &QAbstractButton::released, this, &MainWindow::divide);

        zero_button = new QPushButton("0", this);
        zero_button -> setGeometry(QRect(QPoint(50,300), QSize(50,50)));
        connect(zero_button, &QAbstractButton::released, this, &MainWindow::zero);

        one_button = new QPushButton("1", this);
        one_button -> setGeometry(QRect(QPoint(50,250), QSize(50,50)));
        connect(one_button, &QAbstractButton::released, this, &MainWindow::one);

        two_button = new QPushButton("2", this);
        two_button -> setGeometry(QRect(QPoint(100,250), QSize(50,50)));
        connect(two_button, &QAbstractButton::released, this, &MainWindow::two);

        three_button = new QPushButton("3", this);
        three_button -> setGeometry(QRect(QPoint(150,250), QSize(50,50)));
        connect(three_button, &QAbstractButton::released, this, &MainWindow::three);

        four_button = new QPushButton("4", this);
        four_button -> setGeometry(QRect(QPoint(50,200), QSize(50,50)));
        connect(four_button, &QAbstractButton::released, this, &MainWindow::four);

        five_button = new QPushButton("5", this);
        five_button -> setGeometry(QRect(QPoint(100,200), QSize(50,50)));
        connect(five_button, &QAbstractButton::released, this, &MainWindow::five);

        six_button = new QPushButton("6", this);
        six_button -> setGeometry(QRect(QPoint(150,200), QSize(50,50)));
        connect(six_button, &QAbstractButton::released, this, &MainWindow::six);

        seven_button = new QPushButton("7", this);
        seven_button -> setGeometry(QRect(QPoint(50,150), QSize(50,50)));
        connect(seven_button, &QAbstractButton::released, this, &MainWindow::seven);

        eight_button = new QPushButton("8", this);
        eight_button -> setGeometry(QRect(QPoint(100,150), QSize(50,50)));
        connect(eight_button, &QAbstractButton::released, this, &MainWindow::eight);

        nine_button = new QPushButton("9", this);
        nine_button -> setGeometry(QRect(QPoint(150,150), QSize(50,50)));
        connect(nine_button, &QAbstractButton::released, this, &MainWindow::nine);
}


void MainWindow::clear(){
    value = "";
    label -> setText(value);
}

void MainWindow::equals(){
    sNum = value.toInt();
    if(addBool){
        total = QString::number(fNum + sNum);
        label -> setText(total);
    }
    if(subBool){
        total = QString::number(fNum - sNum);
        label -> setText(total);
    }
    if(multBool){
        total = QString::number(fNum * sNum);
        label -> setText(total);
    }
    if(divBool){
        total = QString::number(fNum / sNum);
        label -> setText(total);
    }
}

void MainWindow::add(){
    fNum = value.toInt();
    value = "";
    label -> setText(value);
    addBool = true;

}

void MainWindow::subtract(){
    fNum = value.toInt();
    value = "";
    label -> setText(value);
    subBool = true;
}

void MainWindow::multiply(){
    fNum = value.toInt();
    value = "";
    label -> setText(value);
    multBool = true;
}
void MainWindow::divide(){
    fNum = value.toInt();
    value = "";
    label -> setText(value);
    divBool = true;
}

void MainWindow::zero(){
    value = value + "0";
    label -> setText(value);
}

void MainWindow::one(){
    value = value + "1";
    label -> setText(value);
}

void MainWindow::two(){
    value = value + "2";
    label -> setText(value);
}

void MainWindow::three(){
    value = value + "3";
    label -> setText(value);
}

void MainWindow::four(){
    value = value + "4";
    label -> setText(value);
}

void MainWindow::five(){
    value = value + "5";
    label -> setText(value);
}

void MainWindow::six(){
    value = value + "6";
    label -> setText(value);
}

void MainWindow::seven(){
    value = value + "7";
    label -> setText(value);
}

void MainWindow::eight(){
    value = value + "8";
    label -> setText(value);
}

void MainWindow::nine(){
    value = value + "9";
    label -> setText(value);
}

MainWindow::~MainWindow(){

}
