/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Tema: Valor Iva - Corrección
   Autores:
   Fecha de creación: 01/11/2021
   Fecha de modificación: 03/11/2021
*/
#include "lista_doble_enlazada.h"
#include <stdexcept>
#include <exception>

Nodo *ListaDobleEnlazada::ultimo_nodo() {
    Nodo *temporal = cabeza;

    if (temporal == nullptr) {
        return nullptr;
    }

    while (temporal->get_siguiente() != nullptr) {
        temporal = temporal->get_siguiente();
    }

    return temporal;
}

Nodo *ListaDobleEnlazada::obtener_nodo(int indice) {
    if (indice < 0 || indice >= tamanio) {
        throw std::invalid_argument("indice fuera de los limites de la lista");
    }

    if (indice == 0) {
        return cabeza;
    }

    int indice_actual = 0;
    Nodo *ultimo = cabeza;

    while (ultimo->get_siguiente() != nullptr) {
        if (indice_actual == indice) {
            break;
        }

        indice_actual++;
        ultimo = ultimo->get_siguiente();
    }

    return ultimo;
}