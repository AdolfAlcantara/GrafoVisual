#include "arista.h"

arista::arista()
{
    inicio = 0;
    fin = 0;
    valor = 0;
    posxi=0; posyi=0; posxf=0; posyf=0;
    recorrido = false;
}

arista::arista(int v, vertice*i, vertice*f,int xi,int yi, int xf,int yf)
{
    valor  =v;
    inicio = i;
    fin = f;
    posxi=xi; posyi=yi; posxf=xf; posyf=yf;
    recorrido = false;
}

arista::~arista()
{
    //dtor
}
