#ifndef NODO_H
#define NODO_H
#include "seleccion.h"

using namespace std;
#include <string>

class nodo{
    private:
        seleccion* selec;
        nodo* sig;

    public:
        nodo();
        nodo(nodo* sig);
        nodo* getSeleccion();
        void setSeleccion(nodo*);
};
#endif