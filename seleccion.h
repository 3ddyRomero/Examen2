#ifndef SELECCION_H
#define SELECCION_H

using namespace std;
#include <string>
#include <fstream>
#include <iostream>


class seleccion{
    private:
        string nombre,ganados,perdidos,empatados,anotados,maxgolea,golesanot;
    
    public:
        seleccion();
        seleccion(string,string,string,string,string,string,string);
        
        void write(ofstream&);
        void read(ifstream&);

        friend ostream& operator<<(ostream&,const seleccion&);
        friend istream& operator>>(istream&, seleccion&);

};
#endif