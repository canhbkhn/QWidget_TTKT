#ifndef SEARCH_H
#define SEARCH_H

#include <QWidget>

namespace Ui {
class search;
}

class search : public QWidget
{
    Q_OBJECT

public:
    explicit search(QWidget *parent = nullptr);
    ~search();

private slots:
    void on_pushButton_4_clicked();

    void on_btnSearch_clicked();

private:
    Ui::search *ui;
};

#endif // SEARCH_H
