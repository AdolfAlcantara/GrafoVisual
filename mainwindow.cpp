#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    graphMain = new grafo();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_graph_clicked()
{
    Grafico graf(this,graphMain);
    graf.setModal(false);
    graf.exec();
}

void MainWindow::on_add_clicked()
{
    QString value = ui->vertice1->text();
    int x = rand()%800, y =rand()%600;
    if(graphMain->addVertice(value.toInt(),x,y) ){
        QMessageBox *qmb;
        qmb->information(this,"Good","Se agrego correctamente");
        return;
    }
    QMessageBox *qmb;
    qmb->information(this,"Error","Nodo ya existe");
}

void MainWindow::on_tie_clicked()
{
    QString valor1 = ui->vertice1->text();
    QString valor2 = ui->vertice2->text();
    QString valor3 = ui->aristavalor->text();
    if(valor3 == ""){
        QMessageBox *qmb;
        qmb->information(this,"Error","El valor de la arista no puede quedar vacio");
        return;
    }
    if(graphMain->conectarVertices(valor1.toInt(),valor2.toInt(),valor3.toInt())){
        QMessageBox *qmb;
        qmb->information(this,"Good","Se enlazaron correctamente");
        ui->vertice1->clear();
        ui->vertice2->clear();
        ui->aristavalor->clear();
        return;
    }
    QMessageBox *qmb;
    qmb->information(this,"Error","No se pudo enlazar. Algun nodo no existe");
}
