

#include <iostream>
#include <cstring>
#include "Nodo.h"

using namespace std;
void Nodo::setDato(float newDato) {
    dato = newDato;
}

float Nodo::getDato(void) {
    return dato;
}

Nodo* Nodo::getAnterior(void) {
    return anterior;
}

void Nodo::setAnterior(Nodo* newAnterior) {
    anterior = newAnterior;
}

Nodo* Nodo::getSiguiente(void) {
    return siguiente;
}

void Nodo::setSiguiente(Nodo* newSiguiente) {
    siguiente = newSiguiente;
}

Nodo::Nodo() {
    dato = 0;
    siguiente = NULL;
    anterior = NULL;
}

Nodo::Nodo(float newDato, Nodo* newSiguiente, Nodo* newAnterior) {
    dato = newDato;
    siguiente = newSiguiente;
    anterior = newAnterior;
}