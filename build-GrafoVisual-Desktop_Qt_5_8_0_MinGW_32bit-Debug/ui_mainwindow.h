/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *add;
    QPushButton *tie;
    QLineEdit *vertice1;
    QLineEdit *vertice2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *graph;
    QLabel *label_3;
    QLineEdit *aristavalor;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(548, 453);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(380, 60, 111, 41));
        tie = new QPushButton(centralWidget);
        tie->setObjectName(QStringLiteral("tie"));
        tie->setGeometry(QRect(380, 140, 111, 41));
        vertice1 = new QLineEdit(centralWidget);
        vertice1->setObjectName(QStringLiteral("vertice1"));
        vertice1->setGeometry(QRect(40, 80, 201, 31));
        vertice2 = new QLineEdit(centralWidget);
        vertice2->setObjectName(QStringLiteral("vertice2"));
        vertice2->setGeometry(QRect(50, 200, 181, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 55, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 170, 55, 16));
        graph = new QPushButton(centralWidget);
        graph->setObjectName(QStringLiteral("graph"));
        graph->setGeometry(QRect(380, 230, 111, 41));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 290, 121, 16));
        aristavalor = new QLineEdit(centralWidget);
        aristavalor->setObjectName(QStringLiteral("aristavalor"));
        aristavalor->setGeometry(QRect(50, 320, 181, 31));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        add->setText(QApplication::translate("MainWindow", "Agregar nodo", Q_NULLPTR));
        tie->setText(QApplication::translate("MainWindow", "Enlazar nodos", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "vertice 1", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Vertice 2", Q_NULLPTR));
        graph->setText(QApplication::translate("MainWindow", "Graficar", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Valor de la Arista ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
