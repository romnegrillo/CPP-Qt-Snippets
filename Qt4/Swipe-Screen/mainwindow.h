#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QPoint first_coordinates;
    QPoint second_coodinates;
    void check_valid_swipe();
    int swipe_sensitivity = 150; // Higher is less sensitive
    int max_page;
    int current_page;
    void change_page(int flag);

private slots:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);


private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
