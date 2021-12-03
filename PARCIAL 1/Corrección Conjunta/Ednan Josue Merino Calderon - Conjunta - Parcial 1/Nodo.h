#pragma once
#include <cstring>

using namespace std;

class Nodo {
private:
	float dato;
	Nodo* anterior;
	Nodo* siguiente;
public:
	Nodo(void);
	Nodo(float, Nodo*, Nodo*);
	void setDato(float);
	float getDato(void);
	Nodo* getSiguiente(void);
	void setSiguiente(Nodo*);
	Nodo* getAnterior(void);
	void setAnterior(Nodo*);
	friend class ListaDobleCircular;

};
