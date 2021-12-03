#pragma once

#include "Nodo.h"

class ListaDobleCircular {
private:
	Nodo* cabeza;
	Nodo* cola;
public:
	ListaDobleCircular();
	bool vacio(void);
	void mostrar();
	void mostrarRecursivo(Nodo*, int);
	void eliminar(float);
	void insertar(float);
};
