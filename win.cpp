//
// Created by fan on 2023/1/8.
//

// You may need to build the project (run Qt uic code generator) to get "ui_win.h" resolved

#include "win.h"
#include "ui_win.h"
#include <QDebug>
#include <QProcess>
#include <QFileDialog>

win::win(QWidget *parent) :
    QWidget(parent), ui(new Ui::win) {
    ui->setupUi(this);
    reload();
    connect(ui->a2fb,&QPushButton::clicked,this, &win::a2fb);       // adb 重启 到  fastboot
    connect(ui->a2rec,&QPushButton::clicked,this, &win::a2rec);     // adb 重启 到 rec
    connect(ui->fbre,&QPushButton::clicked, this,&win::fbre);       // fastboot 重启
    connect(ui->boot,&QPushButton::clicked,this,&win::bootPath);    // 选择 boot 文件
    connect(ui->rec,&QPushButton::clicked,this,&win::recPath);      // 选择 rec 文件
    connect(ui->fbbb,&QPushButton::clicked,this,&win::fbbb);        // fastboot 刷入 boot
    connect(ui->fbbrec,&QPushButton::clicked,this,&win::fbbrec);    // fastboot 刷入 rec
    connect(ui->reload,&QPushButton::clicked,this,&win::reload);    // 获取在线设备
}

win::~win() {
    delete ui;
}
void win::reload() {
    qDebug() << "查看设备";
    QStringList a;
    a << "devices" << "-l";
    cmdProcess( "adb",a);
    QStringList b;
    b << "devices";
    cmdProcess( "fastboot",b);
}

void win::cmdProcess(const QString& program, QStringList& args) {
    auto process = new QProcess(this);
    // 启动 提示
    connect(process, &QProcess::started,this,[=](){
        qInfo()<<"&QProcess::started"<<"QProcess 启动";
    });
    // 错误捕获
    connect(process, &QProcess::readyReadStandardError, this, [=]()
    {
        qDebug()<<"Error" << process->error();
    });
    //结果捕获
    connect(process,&QProcess::readyReadStandardOutput,[=](){
        //qDebug()<<"结果捕获:" << process->readAllStandardOutput().data();
        ui->show->appendPlainText(process->readAllStandardOutput().data());
    });
    // 启动
    process->start(program,args);
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

void win::bootPath() {
    QString a = QFileDialog::getOpenFileName(this,"请选择boot.img","","Boot文件 (*.img);; 所有文件 (*.*);;");
    qDebug()<<"选择的BOOT.img 文件位置"<<a;
    if (!a.isEmpty()) {
        ui->boot_path->setText(a);
    }
}
void win::recPath() {
    QString a = QFileDialog::getOpenFileName(this,"请选择recovery.img","","recovery文件 (*.img);; 所有文件 (*.*);;");
    qDebug()<<"选择的recovery.img 文件位置"<<a;
    if (!a.isEmpty()) {
        ui->rec_path->setText(a);
    }
}

void win::fbbb() {
    qDebug() << "fastboot 刷入 boot";
    QStringList a;
    // fastboot boot xxx.img
    a << "boot" << ui->boot_path->text();
    cmdProcess("fastboot",a);
}

void win::fbbrec() {
    qDebug() << "fastboot 刷入 recovery";
    QStringList a;
    // fastboot flash recovery xxx.img
    a << "flash" << "recovery" << ui->rec_path->text();
    cmdProcess("fastboot",a);
}