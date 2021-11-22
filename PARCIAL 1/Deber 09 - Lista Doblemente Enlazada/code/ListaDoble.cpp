/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 09 - Lista Doblemente Enlazada
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 20/11/2021
   Fecha de modificación: 21/11/2021
*/

#include "ListaDoble.h"

template<typename T>
ListaDoble<T>::ListaDoble() {
    this->cabeza = NULL;
}

template<typename T>
void ListaDoble<T>::insertar_cola(T item) {
    Nodo<T>* nodo = new Nodo<T>[1];
    nodo->dato = item;
    if (cabeza == NULL) {
        cabeza = nodo;
        return;
    }
    Nodo<T>* temp = cabeza;
    Nodo<T>* prev = NULL;
    while (temp->siguiente != NULL) {
        prev = temp;
        temp = temp->siguiente;
    }
    temp->siguiente = nodo;
    temp->anterior = prev;
}

template<typename T>
void ListaDoble<T>::insertar_cabeza(T item) {
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
void ListaDoble<T>::mostrar_lista() {
    if (cabeza == NULL) {
        std::cout << "La lista esta vacia!" << std::endl;
        return;
    }
    std::cout << std::endl << "------Lista Doble------" << std::endl;
    Nodo<T>* temp = cabeza;
    while (temp != NULL) {
        std::cout << temp->dato << " / ";
        temp = temp->siguiente;
    }
    std::cout << std::endl << "--------------------------" << std::endl;
}

template<typename T>
void ListaDoble<T>::borrar_cola() {
    if (cabeza == NULL) {
        std::cout << "La lista esta vacia!" << std::endl;
        return;
    }
    if (cabeza->siguiente == NULL) {
        cabeza = NULL;
        std::cout << "Ultimo elemento removido." << std::endl;
        return;
    }

    Nodo<T>* temp = cabeza;
    while (temp != NULL) {
        if (temp->siguiente->siguiente == NULL) {
            temp->siguiente = NULL;
            std::cout << "Ultimo elemento removido." << std::endl;
            break;
        }
        temp = temp->siguiente;
    }
}

template<typename T>
void ListaDoble<T>::borrar_cabeza() {
    if (cabeza == NULL) {
        std::cout << "La lista esta vacia!" << std::endl;
        return;
    }
    cabeza = cabeza->siguiente;
    cabeza->siguiente->anterior = cabeza;
    std::cout << "Elemento removido" << std::endl;
}
