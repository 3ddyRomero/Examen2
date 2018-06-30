#include "seleccion.h"

seleccion::seleccion(string pnombre,string pganados,string pperdidos,string pempatados,string panotados,string pmaxgolea,string pgolesanot){
    nombre = pnombre;
    ganados = pganados;
    perdidos = pperdidos;
    empatados = pempatados;
    anotados = panotados;
    maxgolea = pmaxgolea;
    golesanot = golesanot; 
}



void seleccion::read(ifstream& in){
  int size;
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  //buffer de nombre
  char nameBuffer[size];
  in.read(nameBuffer,size);

  nombre=nameBuffer;
  //ganados
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  cout<<size;
  char ganBuffer[size];
  in.read(ganBuffer,size);

  ganados=ganBuffer;

  //perdidos
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char lostBuffer[size];
  in.read(lostBuffer,size);
  perdidos = lostBuffer;

  //empatados
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char empaBuffer[size];
  in.read(empaBuffer,size);
  empatados = empaBuffer;

  //anotados
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char anotaBuffer[size];
  in.read(anotaBuffer,size);
  anotados = anotaBuffer;

  //maxgoleador
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char maxgoleaBuffer[size];
  in.read(maxgoleaBuffer,size);
  maxgolea = maxgoleaBuffer;
  
  //maxgoleador
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char golesanotBuffer[size];
  in.read(golesanotBuffer,size);
  golesanot = golesanotBuffer;

}

void seleccion::write(ofstream& out){
   int size = nombre.size();
   //length del nombre y contenido
   out.write(reinterpret_cast<char*>(&size),sizeof(int));
   out.write(nombre.data(),nombre.size());
  //ganados
    size = ganados.size();
    out.write(reinterpret_cast<char*>(&size),sizeof(int));
    out.write(ganados.data(),ganados.size());
  //perdidos
    size=perdidos.size();
    out.write(reinterpret_cast<char*>(&size),sizeof(int));
    out.write(perdidos.data(),perdidos.size());
 //empatados
    size=empatados.size();
    out.write(reinterpret_cast<char*>(&size),sizeof(int));
    out.write(empatados.data(),empatados.size());
 //anotados
    size=anotados.size();
    out.write(reinterpret_cast<char*>(&size),sizeof(int));
    out.write(anotados.data(),anotados.size());
 //max goleador
    size=maxgolea.size();
    out.write(reinterpret_cast<char*>(&size),sizeof(int));
    out.write(maxgolea.data(),maxgolea.size());
 //goles anotados
    size=golesanot.size();
    out.write(reinterpret_cast<char*>(&size),sizeof(int));
    out.write(golesanot.data(),golesanot.size());
}

istream& operator>>(istream& in, seleccion& fifa){
  string buffer;
  //leer una lÃ­nea del archivo
  getline(in,buffer);
  string parse=" ";
  int cont=0;
  for(int i = 0; i<buffer.size();i++){
    if(buffer[i]!=',')
      parse+=buffer[i];
    else{
      switch(cont){
        case 0:
            fifa.nombre = parse;
           break;
        case 1:
            fifa.ganados = parse;
            break;
        case 2:
            fifa.perdidos = parse;
            break;
        case 3:
            fifa.empatados = parse;
            break;
        case 4:
            fifa.anotados = parse;
            break;
        case 5:
            fifa.maxgolea = parse;
            break;
        case 6:
            fifa.golesanot = parse;
            break;
      }
      cont++;
    }
  }

  return in;
}
