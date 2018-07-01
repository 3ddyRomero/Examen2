#include <iostream>
#include <fstream>
#include <cstring>
#include <iostream>
#include "seleccion.h"
//#include "nodo.h"
//#include "lista.h"

using namespace std;

struct Nodo{
    string Seleccion,ganados,perdidos,empatados,anotados,maxgolea,golesanot;
    Nodo *sig;

};
int menu();
void agregar(Nodo *&, string,string,string,string,string,string,string);
void Listar(Nodo*,string,string,string,string,string,string,string);
void eliminar(Nodo *&, string,string,string,string,string,string,string);


int main(){
    int opcion = 0;
    seleccion* N;
    char op = 'y';
    //lista* LS = new lista();
    Nodo *n = NULL;
    
    string Seleccion,ganados,perdidos,empatados,anotados,maxgolea,golesanot;   
    
    
    do{
        switch(menu()){
            case 1:{
                             
                cout<<"Selección: "<<endl;
                cin>>Seleccion;
                cout<<"Ganado: "<<endl;
                cin>>ganados;
                cout<<"Perdidos: "<<endl;
                cin>>perdidos;
                cout<<"Empatados: "<<endl;
                cin>>empatados;
                cout<<"Goles anotados: "<<endl;
                cin>>golesanot;
                 cout<<"Maximo Goleador: "<<endl;
                cin>>maxgolea;
                cout<<"Goles Anotados: "<<endl;
                cin>>golesanot;
                agregar(n,Seleccion,ganados,perdidos,empatados,anotados,maxgolea,golesanot);



                break;
            }
            case 2:{
                //string Pnombre,Pganados,Pperdidos,Pempatados,Panotados,Pmaxgolea,Pgolesanot;    
                Listar(n,Seleccion,ganados,perdidos,empatados,anotados,maxgolea,golesanot);

                //nodo* Lis = new nodo(N);
                //LS->listar(Lis);
                


                break;
            }
            case 3:{
        //escribir archivo de texto
        ofstream salida("Mundial.txt", ios::app);
        //seleccion* s = new seleccion();
        Nodo* s = new Nodo();
        salida<< s;
        salida.close();

        //escribir archivo binario
        ofstream binario("Mundial.dat",ios::binary | ios::app);
        seleccion -> write(binario);
        binario.close();

        //leer archivo binario
        ifstream readBinary("Mundial.dat",ios::binary);

        Nodo otroNodo;
        otroSeleccion.read(readBinary);
        readBinary.close();
        cout<<otroSeleccion<<endl;

       // delete Nodo;

                break;
            }
            case 4:{
            op = 'n';
            cout << "\\.:.***Tenga Un Buen Día***.:./" << endl;
            break;
            }
            default:{
                //Opcion no valida
                cout << "Opcion No Disponible." << endl;
                cout<< "Intente de nuevo."<<endl;
                break;
            }

        } //Switch End
        cout << endl;

    } while (op == 'y');
    cout << endl;


    return 0;
}

int menu(){
    int opcion;
    cout<<"Buen dia."<<endl;
    cout<<"Seleccione una opcion en el menu en base a los números."<<endl;
    cout<<"     MENU"<<endl
            <<"1. Agregar."<<endl
            <<"2. Listar."<<endl
            <<"3. Guardar."<<endl
            <<"4. Salir."<<endl
            <<"Ingrese una opcion: ";
            cin >> opcion;

    return opcion;
}

void Listar(Nodo *ls,string Sele,string g,string p, string e,string an, string max, string gol){
    Nodo *N = new Nodo();
    N=ls;
    N -> Seleccion=Sele;
    N -> ganados=g;
    N -> perdidos=p;
    N -> empatados=e;
    N -> anotados=an;
    N -> maxgolea=max;
    N -> golesanot=gol;
    while(N != NULL){
        cout<<N->Seleccion<<endl;
        /*cout<<" Perdidos: ",N->perdidos;
        cout<<" Ganados: ",N->empatados;
        cout<<" Anotados: ",N->anotados;
        cout<<" Maximo Goleador: ",N->maxgolea;
        cout<<" Goles de",N->maxgolea;
        cout<<": ",N->golesanot;
        cout<<endl;
        */
        N = N->sig;
    } cout<<endl;
}

void agregar(Nodo *&ls,string Sele,string g,string p, string e,string an, string max, string gol){
    Nodo *NN = new Nodo();
    NN -> Seleccion=Sele;
    NN -> ganados=g;
    NN -> perdidos=p;
    NN -> empatados=e;
    NN -> anotados=an;
    NN -> maxgolea=max;
    NN -> golesanot=gol;

    Nodo *tmp = ls;
    Nodo *tmpb;
    while((tmp != NULL)&&(tmp->Seleccion<Sele)){
            tmpb = tmp;
            tmp = tmp -> sig;
        }
        if (ls == tmp){
            ls= NN;
        }else{
            tmpb->sig = NN;
        }
        NN->sig = tmp;
cout<<"El equipo "<<Sele<<" ha sido agregado."<<endl;
cout<<endl;
}

