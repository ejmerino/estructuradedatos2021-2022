/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Tema: Valor Iva - Corrección
   Autores:
   Fecha de creación: 01/11/2021
   Fecha de modificación: 03/11/2021
*/
#include "nodo.h"

Nodo::Nodo(int _valor) {
    this->valor = _valor;
}

Nodo *Nodo::get_anterior() {
    return anterior;
}

void Nodo::set_anterior(Nodo *nodo) {
    this->anterior = nodo;
}

Nodo *Nodo::get_siguiente() {
    return siguiente;
}

void Nodo::set_siguiente(Nodo *nodo) {
    this->siguiente = nodo;
}

int Nodo::get_valor() {
    return valor;
}

void Nodo::set_valor(int _valor) {
    this->valor = valor;
}
