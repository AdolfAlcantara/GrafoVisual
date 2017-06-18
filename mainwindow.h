#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "grafico.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    grafo *graphMain;
    ~MainWindow();

private slots:
    void on_graph_clicked();

    void on_add_clicked();

    void on_tie_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
