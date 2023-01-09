/********************************************************************************
** Form generated from reading UI file 'win.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIN_H
#define UI_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_win
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *boot_path;
    QPushButton *boot;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *rec_path;
    QPushButton *rec;
    QVBoxLayout *verticalLayout_7;
    QPlainTextEdit *show;
    QVBoxLayout *verticalLayout_4;
    QPushButton *a2fb;
    QPushButton *a2rec;
    QPushButton *fbre;
    QPushButton *fbbb;
    QPushButton *fbbrec;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *reload;
    QWidget *tab_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *win)
    {
        if (win->objectName().isEmpty())
            win->setObjectName(QString::fromUtf8("win"));
        win->resize(518, 576);
        verticalLayout_3 = new QVBoxLayout(win);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(win);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        boot_path = new QLineEdit(tab);
        boot_path->setObjectName(QString::fromUtf8("boot_path"));
        boot_path->setReadOnly(true);

        horizontalLayout_3->addWidget(boot_path);

        boot = new QPushButton(tab);
        boot->setObjectName(QString::fromUtf8("boot"));

        horizontalLayout_3->addWidget(boot);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        rec_path = new QLineEdit(tab);
        rec_path->setObjectName(QString::fromUtf8("rec_path"));
        rec_path->setReadOnly(true);

        horizontalLayout_5->addWidget(rec_path);

        rec = new QPushButton(tab);
        rec->setObjectName(QString::fromUtf8("rec"));

        horizontalLayout_5->addWidget(rec);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        show = new QPlainTextEdit(tab);
        show->setObjectName(QString::fromUtf8("show"));

        verticalLayout_7->addWidget(show);


        verticalLayout_5->addLayout(verticalLayout_7);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        a2fb = new QPushButton(tab);
        a2fb->setObjectName(QString::fromUtf8("a2fb"));

        verticalLayout_4->addWidget(a2fb);

        a2rec = new QPushButton(tab);
        a2rec->setObjectName(QString::fromUtf8("a2rec"));

        verticalLayout_4->addWidget(a2rec);

        fbre = new QPushButton(tab);
        fbre->setObjectName(QString::fromUtf8("fbre"));

        verticalLayout_4->addWidget(fbre);

        fbbb = new QPushButton(tab);
        fbbb->setObjectName(QString::fromUtf8("fbbb"));

        verticalLayout_4->addWidget(fbbb);

        fbbrec = new QPushButton(tab);
        fbbrec->setObjectName(QString::fromUtf8("fbbrec"));

        verticalLayout_4->addWidget(fbbrec);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_4->addWidget(pushButton_5);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_4->addWidget(pushButton_3);

        reload = new QPushButton(tab);
        reload->setObjectName(QString::fromUtf8("reload"));

        verticalLayout_4->addWidget(reload);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout = new QVBoxLayout(tab_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textBrowser = new QTextBrowser(tab_3);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);


        verticalLayout->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_3->addWidget(tabWidget);


        retranslateUi(win);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(win);
    } // setupUi

    void retranslateUi(QWidget *win)
    {
        win->setWindowTitle(QCoreApplication::translate("win", "win", nullptr));
        boot_path->setPlaceholderText(QCoreApplication::translate("win", "boot.img\346\226\207\344\273\266\344\275\215\347\275\256", nullptr));
        boot->setText(QCoreApplication::translate("win", "boot", nullptr));
        rec_path->setPlaceholderText(QCoreApplication::translate("win", "recovery.img\346\226\207\344\273\266\344\275\215\347\275\256", nullptr));
        rec->setText(QCoreApplication::translate("win", "Rec", nullptr));
        a2fb->setText(QCoreApplication::translate("win", "ADB\351\207\215\345\220\257\345\210\260fastboot\346\250\241\345\274\217", nullptr));
        a2rec->setText(QCoreApplication::translate("win", "ADB\351\207\215\345\220\257\345\210\260recovery", nullptr));
        fbre->setText(QCoreApplication::translate("win", "fastboot\351\207\215\345\220\257", nullptr));
        fbbb->setText(QCoreApplication::translate("win", "fastboot \347\203\247\345\275\225 boot", nullptr));
        fbbrec->setText(QCoreApplication::translate("win", "fastboot \347\203\247\345\275\225 recovery", nullptr));
        pushButton_5->setText(QCoreApplication::translate("win", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("win", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("win", "PushButton", nullptr));
        reload->setText(QCoreApplication::translate("win", "\345\210\267\346\226\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("win", "\345\210\267\346\234\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("win", "ROM", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("win", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\234\254\350\275\257\344\273\266\344\275\277\347\224\250QT6</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("win", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class win: public Ui_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIN_H
