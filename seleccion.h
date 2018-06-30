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

        string getNombre();
        void setNombre(string);

        string getGanados();
        void setGanados(string);

        string getPerdidos();
        void setPerdidos(string);
        
        string getEmpatados();
        void setEmpatados(string);

        string getAnotados();
        void setAnotados(string);

        string getMaxGolea();
        void setMaxGolea(string);

        string getGolesAnot();
        void setGolesAnot(string);

        void write(ofstream&);
        void read(ifstream&);

        friend ostream& operator<<(ostream&,const seleccion&);
        friend istream& operator>>(istream&, seleccion&);

};
#endif