#include "lista.h"
#include "nodo.h"
#include "seleccion.h"

using namespace std;

lista::lista() {

}

lista::lista(nodo* pn){
    n=pn;
}

nodo* lista::getlista(){
    return n;
}

void lista::setlista(nodo* pno){
    n=pno;
    
}

void lista::agregar(nodo* pl){
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

void lista::listar(nodo* ps){
    
}