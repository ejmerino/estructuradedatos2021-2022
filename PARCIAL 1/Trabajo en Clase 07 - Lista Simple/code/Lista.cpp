/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Trabajo en Clase 07 - Lista Simple
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 20/11/2021
   Fecha de modificación: 21/11/2021
*/

#include "Lista.h"

template<typename T>
Lista<T>::Lista() {
    this->cabeza = NULL;
}

template <typename T>
bool Lista<T>::estaVacia() {
    if (cabeza == NULL) {
        return true;
    }
    else {
        return false;
    }
}

template<typename T>
void Lista<T>::insertar(T item) {
    Nodo<T>* nodo = new Nodo<T>[1];
    nodo->dato = item;
    if (estaVacia()) {
        cabeza = nodo;
        return;
    }
    else {
        cabeza->anterior = nodo;
        nodo->siguiente = cabeza;
        cabeza = nodo;
    }

}

template<typename T>
void Lista<T>::mostrar_lista() {
    if (cabeza == NULL) {
        std::cout << "La lista esta vacia!" << std::endl;
        return;
    }
    std::cout << std::endl << "------ Lista ------" << std::endl;
    Nodo<T>* temp = cabeza;
    while (temp != NULL) {
        std::cout << temp->dato << " / ";
        temp = temp->siguiente;
    }
    std::cout << std::endl << "--------------------------" << std::endl;
}

template<typename T>
void Lista<T>::borrar() {
    if (estaVacia()) {
        std::cout << "¡La lista esta vacía!" << std::endl;
        return;
    }
    cabeza = cabeza->siguiente;
    cabeza->siguiente->anterior = cabeza;
    std::cout << "Elemento removido" << std::endl;
}

/*template<typename T>
bool Lista<T>::borrar() {
    Nodo<T>* anterior = NULL;
    Nodo<T>* temp = cabeza;
    if (estaVacia()) {
        if (temp) {
            if (anterior)
                anterior->siguiente = temp->siguiente;
            else
                cabeza = temp->siguiente;
            delete temp;
            return true;
        }
    }
}*/
