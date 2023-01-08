//
// Created by fan on 2023/1/8.
//

#ifndef ROM_TOOL_WIN_H
#define ROM_TOOL_WIN_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class win; }
QT_END_NAMESPACE

class win : public QWidget {
Q_OBJECT

public:
    explicit win(QWidget *parent = nullptr);

    ~win() override;

private:
    Ui::win *ui;

    void a2fb();
    void cmdProcess(const QString &program, QStringList &args);

    void a2rec();

    void fbre();
};


#endif //ROM_TOOL_WIN_H
