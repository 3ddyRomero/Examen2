#include <iostream>
#include <fstream>
#include <cstring>
#include <iostream>
#include "seleccion.h"
#include "nodo.h"
#include "lista.h"

int menu();
int main(){
    int opcion = 0;
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
                cou<<"Goles anotados: "<<endl;
                cin>>golesanot;
                cout<<"Maximo Goleador: "<<endl;
                cin>>maxgolea;
                cout<<"Goles Anotados: "<<endl;
                cin>>golesanot;
                seleccion* N = new seleccion(nombre,ganados,perdidos,empatados,anotados,maxgolea,golesanot);
                nodo* NM = new nodo(N);
                Ls->Agregar(NM);

                break;
            }
            case 2:{

                break;
            }
            case 3:{

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

        }

    }





    return 0;
}

int menu(){
    int opcion;
    cout<<"Buen dia."<<endl;
    cout<<"Seleccione una opcion en el menu en base a los números."<<endl;
    cout<<"     MENU"<<endl
            <<"1. Listar."<<endl
            <<"2. Agregar."<<endl
            <<"3. Guardar."<<endl
            <<"4. Salir."<<endl
            <<"Ingrese una opcion: ";
            cin >> opcion;

    return opcion;
}