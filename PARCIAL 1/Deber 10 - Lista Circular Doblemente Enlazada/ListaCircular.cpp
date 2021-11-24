#include "ListaCircular.h"

template<typename T>
ListaCircular<T>::ListaCircular() {
    this->cabeza = NULL;
}

template<typename T>
void ListaCircular<T>::insertar_cola(T item) {
    Nodo<T>* nodo = new Nodo<T>[1];
    nodo->dato = item;
    if (cabeza == NULL) {
        cabeza = nodo;
        return;
    }
    cabeza->anterior = nodo;
    nodo->siguiente = cabeza;
    cabeza = nodo;
}

template<typename T>
void ListaCircular<T>::insertar_cabeza(T item) {
    Nodo<T>* nodo = new Nodo<T>[1];
    nodo->dato = item;
    if (cabeza == NULL) {
        cabeza = nodo;
        return;
    }
    cabeza->anterior = nodo;
    nodo->siguiente = cabeza;
    cabeza = nodo;
}

template<typename T>
void ListaCircular<T>::insertar_posicion(T item, T posicion) {

}

template<typename T>
void ListaCircular<T>::mostrar_lista() {
    if (cabeza == NULL) {
        std::cout << "La lista esta vacia!" << std::endl;
        return;
    }
    std::cout << std::endl << "------Lista Circular------" << std::endl;
    Nodo<T>* temp = cabeza;
    while (temp != NULL) {
        std::cout << temp->dato << " / ";
        temp = temp->siguiente;
    }
    std::cout << std::endl << "--------------------------" << std::endl;
}

template<typename T>
void ListaCircular<T>::borrar_cabeza() {
    if (cabeza == NULL) {
        std::cout << "La lista esta vacia!" << std::endl;
        return;
    }
    cabeza = cabeza->siguiente;
    cabeza->siguiente->anterior = cabeza;
    std::cout << "Elemento removido" << std::endl;
}
