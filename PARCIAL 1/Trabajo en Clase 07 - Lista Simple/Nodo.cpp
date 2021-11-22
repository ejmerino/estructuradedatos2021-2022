#include "Nodo.h"
#include "Lista.h"

template <typename T>
T Nodo <T>::getValor() {
	return this->data;
}

template <typename T> 
void Nodo<T>::setValor(T _data) {
	this->data = _data;
}