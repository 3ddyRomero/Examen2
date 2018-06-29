#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

using namespace std;

class lista{
    private:
        nodo* n = NULL;
    public:
        lista();
        lista(nodo*);

        nodo* getlista();
        void setlista(nodo*);

        void agregar(seleccion* s);
};
#endif