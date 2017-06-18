#ifndef ARISTA_H
#define ARISTA_H

class vertice;

class arista
{
    public:
        arista();
        arista(int v, vertice*i, vertice*f,int xi,int yi, int xf,int yf);
        virtual ~arista();

        int valor,posxi, posyi, posxf, posyf;
        vertice *inicio,*fin;
        bool recorrido;
};

#endif // ARISTA_H
