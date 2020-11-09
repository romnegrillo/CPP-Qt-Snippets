#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setMouseTracking(true);

    this->current_page = 1;
    this->max_page = 10;        // Sample
    ui->img_label->setText(QString::number(this->current_page));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::mouseMoveEvent(QMouseEvent *event)
{

}


void MainWindow::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "Mouse pressed.";

    this->first_coordinates = event->pos();
    qDebug() << "Coodinates: " << this->first_coordinates;
}


void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug() << "Mouse released.";


    this->second_coodinates = event->pos();
    qDebug() << "Coodinates: " << this->second_coodinates;

    check_valid_swipe();
}

void MainWindow::check_valid_swipe()
{
    // Check if in valid swipe area.
    // If the first click in swipe is not in the range limit, we do nothing.
    if(
           !(
                this->first_coordinates.x() >= 80 && this->first_coordinates.x() <= 700 &&
                this->first_coordinates.y() >= 380 && this->first_coordinates.y() <= 430

                )

     )
    {
        return;
    }


    // Compute change in coordinates. +- is experimental.
    QPoint change_in_coordinates = this->second_coodinates - this->first_coordinates;

    qDebug() << "Change in coordinates: " << change_in_coordinates;

    int change_in_x = change_in_coordinates.x();


    if(change_in_x < -1*this->swipe_sensitivity)
    {
        qDebug () << "Swipe right to left. Move to the right.";
        this->change_page(0); // 0 is to the right.

    }
    else if(change_in_x > this->swipe_sensitivity)
    {
        qDebug () << "Swipe left to right. Move to the left.";
        this->change_page(1); // 1 is to the left.
    }


}

void MainWindow::change_page(int flag)
{
    if(flag == 0 and this->current_page < this->max_page)
    {
        this->current_page++;
    }
    else if(flag == 1 and this->current_page > 1)
    {
        this->current_page--;
    }

     ui->img_label->setText(QString::number(this->current_page));
}
