#ifndef VERTICE_H
#define VERTICE_H
#include "arista.h"
#include <vector>
#include <iostream>

using namespace std;

class vertice
{
    public:
        vertice(int v, int x, int y);
        void addArista(int, vertice*);
        virtual ~vertice();

        //variables
        int valor,posx,posy, radio=50;
        vector<arista*> aristas;
        bool recorrido;

};

#endif // VERTICE_H
