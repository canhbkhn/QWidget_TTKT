#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QWidget>

namespace Ui {
class employee;
}

class employee : public QWidget
{
    Q_OBJECT

public:
    explicit employee(QWidget *parent = nullptr);
    ~employee();
    //void exec();


private slots:
    void on_pushButton_clicked();

private:
    Ui::employee *ui;
};

#endif // EMPLOYEE_H
