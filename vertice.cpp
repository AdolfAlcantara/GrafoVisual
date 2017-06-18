#include "vertice.h"

vertice::vertice(int v, int x, int y)
{
    valor = v;
    posx=x;
    posy=y;
    recorrido = false;
}

void vertice::addArista(int v,  vertice*f)
{
    aristas.push_back(new arista(v,this,f,this->posx,this->posy, f->posx,f->posy));
}

vertice::~vertice()
{
    //dtor
}
