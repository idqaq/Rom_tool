#include <QApplication>
#include <QPushButton>
#include "win.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    win w;
    w.show();
    return QApplication::exec();
}
