#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Conjunto.h"
#include "Conjunto.cpp"

using namespace std;

void iniciar();
void ingresarValores(int, int);

int main(int argv, char** argc) {

	iniciar();
	return 0;
}

void iniciar() {
	int dim1, dim2;

	cout<<"Ingresar la dimension del primer conjunto: ";cin>>dim1; 
	cout<<"\nIngresar la dimension del segundo conjunto: ";cin>>dim2; 
	ingresarValores(dim1, dim2);
	
}

void ingresarValores(int _dim1, int _dim2) {

	Conjunto<int> conjunto1(_dim1);
	Conjunto<int> conjunto2(_dim2);
	conjunto1.ingresarValores(_dim1);
	int* A = conjunto1.getValores();
	conjunto2.ingresarValores(_dim2);
	int* B = conjunto2.getValores();

	conjunto1.imprimir();
	conjunto2.imprimir();

	conjunto1.unir(A, B, _dim1, _dim2);
	conjunto1.intersecar(A, B, _dim1, _dim2);
}