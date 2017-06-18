#ifndef GRAFO_H
#define GRAFO_H
#include "vertice.h"

using namespace std;

class grafo
{
    public:
        grafo();
        int cantVertices();             //cuenta cuantos vertices tiene el grafo
        bool addVertice(int value,int posx, int posy);
        vertice* buscarVertice(int);
        bool conectarVertices(int verticei, int verticef, int varista);
        void trazarRuta();
        virtual ~grafo();

        //variables
        vertice *head;
        vector<vertice*> vertices;

};

#endif // GRAFO_H
