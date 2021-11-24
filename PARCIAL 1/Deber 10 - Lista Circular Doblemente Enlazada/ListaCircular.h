#pragma once
#include "Nodo.h"
#include "Nodo.cpp"

template<typename T>
class ListaCircular {
private:
    Nodo<T>* cabeza;
    Nodo<T>* cola;
public:
    ListaCircular();
    void insertar_cola(T);
    void insertar_cabeza(T);
    void insertar_posicion(T, T);
    void mostrar_lista();
    void borrar_cabeza();
};