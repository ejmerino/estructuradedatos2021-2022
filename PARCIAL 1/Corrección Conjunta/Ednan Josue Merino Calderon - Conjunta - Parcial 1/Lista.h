/**
	Universidad de las Fuerzas Armadas - ESPE
	Correcci�n Prueba Conjunta
	Autor: Josu� Merino Calder�n
	Fecha de creaci�n: 02/12/2021
	Fecha de modificaci�n: 03/12/2021
**/

#pragma once
#include "Nodo.h"

template <class T>
class Lista {
	protected:
		Nodo<T>* primero;
		Nodo<T>* ultimo;
		Nodo<T>* nuevoNodo;
		int size;
	public:
		Lista();
		bool estaVacia();
		bool buscar(const T&) const;
		void insertar_cabeza(const T&);
		void insertar_cola(const T&);
		void agregar(const T&, const T&);
		void eliminar_cabeza();
		void eliminar_cola();
		void eliminar(const T&);
		int getSize();
		void mostrar();
};