/********************************************************************************
** Form generated from reading UI file 'grafico.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFICO_H
#define UI_GRAFICO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Grafico
{
public:
    QGraphicsView *graphicsView;
    QPushButton *track;

    void setupUi(QDialog *Grafico)
    {
        if (Grafico->objectName().isEmpty())
            Grafico->setObjectName(QStringLiteral("Grafico"));
        Grafico->resize(1000, 600);
        graphicsView = new QGraphicsView(Grafico);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 800, 600));
        track = new QPushButton(Grafico);
        track->setObjectName(QStringLiteral("track"));
        track->setGeometry(QRect(850, 40, 93, 31));

        retranslateUi(Grafico);

        QMetaObject::connectSlotsByName(Grafico);
    } // setupUi

    void retranslateUi(QDialog *Grafico)
    {
        Grafico->setWindowTitle(QApplication::translate("Grafico", "Dialog", Q_NULLPTR));
        track->setText(QApplication::translate("Grafico", "Trazar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Grafico: public Ui_Grafico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFICO_H
