/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *swipe_area;
    QGroupBox *picture_groupbox;
    QLabel *img_label;
    QGroupBox *picture_with_button_groupbox;
    QLabel *img_half_label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        swipe_area = new QLabel(centralwidget);
        swipe_area->setObjectName(QString::fromUtf8("swipe_area"));
        swipe_area->setGeometry(QRect(80, 360, 621, 51));
        QFont font;
        font.setPointSize(20);
        swipe_area->setFont(font);
        swipe_area->setFrameShape(QFrame::Box);
        swipe_area->setAlignment(Qt::AlignCenter);
        picture_groupbox = new QGroupBox(centralwidget);
        picture_groupbox->setObjectName(QString::fromUtf8("picture_groupbox"));
        picture_groupbox->setGeometry(QRect(70, 20, 641, 321));
        img_label = new QLabel(picture_groupbox);
        img_label->setObjectName(QString::fromUtf8("img_label"));
        img_label->setGeometry(QRect(10, 30, 621, 281));
        QFont font1;
        font1.setPointSize(40);
        img_label->setFont(font1);
        img_label->setFrameShape(QFrame::Box);
        img_label->setAlignment(Qt::AlignCenter);
        picture_with_button_groupbox = new QGroupBox(centralwidget);
        picture_with_button_groupbox->setObjectName(QString::fromUtf8("picture_with_button_groupbox"));
        picture_with_button_groupbox->setGeometry(QRect(70, 30, 641, 321));
        img_half_label = new QLabel(picture_with_button_groupbox);
        img_half_label->setObjectName(QString::fromUtf8("img_half_label"));
        img_half_label->setGeometry(QRect(300, 20, 331, 281));
        img_half_label->setFont(font1);
        img_half_label->setFrameShape(QFrame::Box);
        img_half_label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(picture_with_button_groupbox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 140, 89, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        swipe_area->setText(QApplication::translate("MainWindow", "Swipe Area", 0, QApplication::UnicodeUTF8));
        picture_groupbox->setTitle(QString());
        img_label->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        picture_with_button_groupbox->setTitle(QString());
        img_half_label->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "HOME", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
