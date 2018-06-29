#include "lista.h"

using namespace std;

lista::lista(nodo* pn){
    n=pn;
}

nodo* lista::getlista(){
    return n;
}

void lista::setlista(nodo* pno){
    this->n=pno;
}

void agregar(nodo* pl){
    if (n == NULL){
        n = pl;
    }else {
        nodo* tmp;
        tmp=n;
        while(tmp->getSeleccion() != NULL){
            tmp = tmp->getSeleccion();
        }
        tmp->setSeleccion(pl);
    }
    
}

