//
// Created by fan on 2023/1/8.
//

// You may need to build the project (run Qt uic code generator) to get "ui_win.h" resolved

#include "win.h"
#include "ui_win.h"
#include <QDebug>
#include <QProcess>


win::win(QWidget *parent) :
    QWidget(parent), ui(new Ui::win) {
    ui->setupUi(this);
    connect(ui->a2fb,&QPushButton::clicked,this, &win::a2fb);
    connect(ui->a2rec, &QPushButton::clicked,this, &win::a2rec);
    connect(ui->fbre,&QPushButton::clicked, this,&win::fbre);
}

win::~win() {
    delete ui;
}
void win::cmdProcess(const QString& program, QStringList& args) {
    auto process = new QProcess(this);
    connect(process, &QProcess::started,this,[=](){
        qInfo()<<"&QProcess::started";
    });
    connect(process, &QProcess::readyReadStandardError, this, [=]()
    {
        qDebug()<<"Error";
    });
    process->start(program,args);

    //结果捕获
    QObject::connect(process,&QProcess::readyReadStandardOutput,[=](){
        qDebug()<<"结果捕获:" << process->readAllStandardOutput().data();
    });
    QString  str = process->readAllStandardOutput(); //捕获输出
    qDebug() << str;
}


void win::a2fb() {
    qDebug() << "启动Fastboot";
    QStringList a;
    a << "reboot-bootloader";
    cmdProcess("adb" ,a);
}

void win::a2rec() {
    qDebug() << "启动recovery模式";
    QStringList a;
    a << "reboot" << "recovery";
    cmdProcess("adb",a);
}

void win::fbre() {
    qDebug() << "fastboot重启";
    QStringList a;
    a << "reboot";
    cmdProcess("fastboot",a);
}