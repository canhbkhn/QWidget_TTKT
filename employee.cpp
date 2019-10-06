#include "employee.h"
#include "ui_employee.h"
#include <QWidget>
#include <QDebug>
#include <QTableWidget>


employee::employee(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::employee)
{
    ui->setupUi(this);
    qDebug() << "set ui";
    QString* qq = new QString("Last");
    ui->tableView->horizontalHeader()

}

employee::~employee()
{
    delete ui;
}

/*void employee::exec()
{
    this->show();
}*/

void employee::on_pushButton_clicked()
{
    this->hide();
    this->close();

    return; // return main form
}
