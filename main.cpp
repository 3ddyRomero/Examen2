#include <iostream>
#include <fstream>
#include <cstring>
#include <iostream>
#include "seleccion.h"
#include "nodo.h"
#include "lista.h"

using namespace std;

int menu();

int main(){
    int opcion = 0;
    seleccion* N;
    char op = 'y';
    lista* LS = new lista();
    
    
    do{
        switch(menu()){
            case 1:{
                string nombre,ganados,perdidos,empatados,anotados,maxgolea,golesanot;                
                cout<<"Nombre: "<<endl;
                cin>>nombre;
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
                N = new seleccion(nombre,ganados,perdidos,empatados,anotados,maxgolea,golesanot);
                nodo* NM = new nodo(N);
                LS->agregar(NM);
                break;
            }
            case 2:{
                nodo* Ll = new nodo(N);
                LS->listar(Ll);

                break;
            }
            case 3:{
        //escribir archivo de texto
        /*ofstream salida("Mundial.txt", ios::app);
        //seleccion* s = new seleccion();
        seleccion* s = new seleccion(N->getnombre(),N->getganados(),N->getperdidos(),N->getempatados(),N->getanotados(),N->getmaxgolea(),N->getgolesanot());
        salida<<*seleccion;
        salida.close();

        //escribir archivo binario
        ofstream binario("Mundial.dat",ios::binary | ios::app);
        seleccion -> write(binario);
        binario.close();

        //leer archivo binario
        ifstream readBinary("Mundial.dat",ios::binary);

        seleccion otroSeleccion;
        otroSeleccion.read(readBinary);
        readBinary.close();
        cout<<otroSeleccion<<endl;

        delete seleccion;*/

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