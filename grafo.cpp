#include "grafo.h"

grafo::grafo()
{
    head = 0;

}

int grafo::cantVertices()
{
    int contador=0;
    for(int i=0; i<vertices.size();i++){
        contador++;
    }
    return contador;
}

vertice* grafo::buscarVertice(int v)
{
    for(int  i =0;i<vertices.size();i++){
        if(vertices[i]->valor == v)
            return vertices[i];
    }
    return 0;
}

bool grafo::addVertice(int value, int posx, int posy)
{
    if(!buscarVertice(value)){
        vertices.push_back(new vertice(value,posx,posy));
        return true;
    }
    return false;
}


bool grafo::conectarVertices(int verticei, int verticef, int varista)
{
        if(buscarVertice(verticei) && buscarVertice(verticef)){
            buscarVertice(verticei)->addArista(varista,buscarVertice(verticef));
            return true;
        }
        return false;
}

int getMinValue(vertice*v)
{
    int min = INT_MAX;
    for(int j=0;j<v->aristas.size();j++){
        arista *temp2 = v->aristas[j];
        if(temp2->valor<min){
            min = temp2->valor;
        }
    }
    return min;
}


void grafo::trazarRuta()
{
    for(int i=0;i<vertices.size();i++){
        vertice*temp = vertices[i];
        int valorMinimo = getMinValue(temp);
        temp->recorrido=true;
        for(int j=0;j<temp->aristas.size();j++){
            arista*temp2 = temp->aristas[j];
            if(temp2->valor==valorMinimo){
                temp2->recorrido=true;
            }
        }
    }
}

grafo::~grafo()
{
    //dtor
}
