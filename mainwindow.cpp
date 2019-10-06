#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QDebug>
#include "employee.h"
#include "search.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnQuitApp_clicked()
{
    // hide window
    this->hide();
    //close window
    this->close();
}

void MainWindow::on_btnInsertImg_clicked()
{
    QString url = QFileDialog::getOpenFileName(this, tr("Open Image"),
                                               QDir::currentPath(),
                                               tr("Image Files (*.png *.jpg *.bmp)"));


    QImage image(url);

    // scene
    QGraphicsScene scene;
    //QGraphicsView view(&scene);
    //ui->EmployeeImgView = new QGraphicsView(&scene);


    if(!url.isEmpty())
    {
        qDebug() << "url -> " << url;
        QGraphicsPixmapItem pixItem(QPixmap::fromImage(image));
        scene.addItem(&pixItem);
        //ui->EmployeeImgView(scene)->show();
        ui->EmployeeImgView->setScene(&scene);
        ui->EmployeeImgView->show();
    }
    else {
        QMessageBox::information(this, "Image viewer", "Can not get the url of image");
        return;
    }
}

void MainWindow::on_btnView_clicked()
{
    qDebug() << "View button is clicked!";
    search* s = new search();
    s->show();

}
