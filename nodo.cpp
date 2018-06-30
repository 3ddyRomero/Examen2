#include "nodo.h"

using namespace std;

nodo::nodo(seleccion* pselec){
    selec = pselec;

}

nodo* nodo::getSeleccion(){
    return n;
}

void nodo::setSeleccion(nodo* pselecc){
    n = pselecc;
}