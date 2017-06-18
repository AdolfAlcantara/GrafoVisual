#ifndef GRAFICO_H
#define GRAFICO_H

#include <QDialog>
#include <QMessageBox>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <stdlib.h>
#include "grafo.h"

namespace Ui {
class Grafico;
}

class Grafico : public QDialog
{
    Q_OBJECT

public:
    explicit Grafico(QWidget *parent = 0, grafo *g=0);
    grafo *graphGrafico;
    ~Grafico();

private slots:
    void on_track_clicked();

private:
    Ui::Grafico *ui;
    QGraphicsScene *escena;
    QGraphicsEllipseItem *elipse;
    QGraphicsLineItem *line;
    QGraphicsSimpleTextItem *valor;
    void limpiarTrazado();

};

#endif // GRAFICO_H
