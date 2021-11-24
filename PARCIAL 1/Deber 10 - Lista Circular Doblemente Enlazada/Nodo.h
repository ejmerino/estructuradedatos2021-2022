#pragma once
#include <iostream>

template <typename T>
    class Nodo {
    private:
        T dato;
        Nodo<T>* siguiente;
        Nodo<T>* anterior;
        template<typename U>
        friend class ListaCircular;
    public:
        Nodo();
};