#ifndef NODO_H
#define NODO_H
#include "seleccion.h"

using namespace std;
#include <string>

class nodo{
    private:
        seleccion* selec;
        nodo* n = NULL;

    public:
        nodo();
        nodo(seleccion* selec);
        nodo* getSeleccion();
        void setSeleccion(nodo*);
};
#endif