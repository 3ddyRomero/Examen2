exe:    main.o seleccion.o nodo.o lista.o
    g++ -c main.o seleccion.o nodo.o lista.o
main.o: main.cpp
    g++ -c main.cpp
seleccion.o:    seleccion.h seleccion.cpp
    g++ -c seleccion.cpp
nodo.o: nodo.h nodo.cpp seleccion.h
    g++ -c nodo.cpp
lista.o:    lista.h lista.cpp nodo.h
    g++ -c lista.cpp