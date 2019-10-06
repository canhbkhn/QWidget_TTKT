#include "search.h"
#include "ui_search.h"
#include "employee.h"

search::search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::on_pushButton_4_clicked()
{
    this->hide();
    this->close();

    return;
}

void search::on_btnSearch_clicked()
{
    employee* emp = new employee();
    emp->show();
}
