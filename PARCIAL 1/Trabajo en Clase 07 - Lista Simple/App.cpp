#include <iostream>
#include "Lista.h"
#include "Lista.cpp"
#include "Nodo.h"
#include "Nodo.cpp"

using namespace std;

int main(int argc, char** argv) {
	Lista<int> lst;
	cout << "Universidad de las Fuerzas Armadas - ESPE" << endl;
	lst.estaVacia();
	lst.insertar(1);
	lst.insertar(2);
	lst.insertar(3);
	lst.mostrar();
	return 0;
}