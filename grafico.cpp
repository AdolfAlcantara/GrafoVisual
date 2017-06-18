#include "grafico.h"
#include "ui_grafico.h"



Grafico::Grafico(QWidget *parent, grafo *g) :
    QDialog(parent),
    ui(new Ui::Grafico)
{
    ui->setupUi(this);
    graphGrafico  = g;
    escena = new QGraphicsScene(this);
    ui->graphicsView->setScene(escena);

    QBrush blueBrush(Qt::blue);
    QPen blackPen(Qt::black);
    QPen linea(Qt::blue);
    blackPen.setWidth(3);
    linea.setWidth(10);

    QFont *textVertice = new QFont("Arial");
    textVertice->setItalic(false);
    textVertice->setPixelSize(50);

    for(int i=0;i<graphGrafico->vertices.size();i++){
        vertice*temp = graphGrafico->vertices[i];
        elipse = escena->addEllipse(temp->posx,temp->posy,temp->radio,temp->radio,blackPen,blueBrush);
        for(int j=0;j<temp->aristas.size();j++){
            arista*temp2 = temp->aristas[j];
            int adjust = temp->radio/2;
            line = escena->addLine(temp2->posxi+adjust,temp2->posyi+adjust,temp2->posxf+adjust,temp2->posyf+adjust,linea);
        }
    }





}

void Grafico::limpiarTrazado()
{
    for(int i=0;i<graphGrafico->vertices.size();i++){
        vertice*temp = graphGrafico->vertices[i];
        temp->recorrido = false;
        for(int j=0;j<temp->aristas.size();j++){
            arista*temp2 = temp->aristas[j];
            temp2->recorrido =false;
        }
    }
}

void Grafico::on_track_clicked()
{
    graphGrafico->trazarRuta();

    QBrush greenBrush(Qt::green);
    QPen blackPen(Qt::black);
    QPen lineaRecorrida(Qt::green);
    lineaRecorrida.setWidth(10);
    blackPen.setWidth(3);

    for(int i=0;i<graphGrafico->vertices.size();i++){
        vertice*temp = graphGrafico->vertices[i];
        if(temp->recorrido){
            elipse = escena->addEllipse(temp->posx,temp->posy,temp->radio,temp->radio,blackPen,greenBrush);
        }
        for(int j=0;j<temp->aristas.size();j++){
            arista*temp2 = temp->aristas[j];
            if(temp2->recorrido){
                int adjust = temp->radio/2;
                line = escena->addLine(temp2->posxi+adjust,temp2->posyi+adjust,temp2->posxf+adjust,temp2->posyf+adjust,lineaRecorrida);
            }
        }
    }
}

Grafico::~Grafico()
{
    limpiarTrazado();
    delete ui;
}


