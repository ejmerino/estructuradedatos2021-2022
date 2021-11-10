#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Datos.cpp"
#include "Datos.h"

using namespace std;

int main() {
	int edad;
	string nombre;
	Datos<int> edad_;
	Datos<string> nombre_;
	Datos<string> datos_;
	char option = { };
	do {
		cout << "Ingrese su nombre: ";
		cin >> nombre;

		cout << "Ingrese su edad: ";
		cin >> edad;

		nombre_.set_nombre(nombre);
		edad_.set_edad(edad);

		if (edad >= 18) {
			datos_.to_string1();
		} else{
			datos_.to_string2();
		}

		cout << endl << "Desea realizar una nueva operacion? (S/N) " << endl;
		cin >> option;

		system("cls");

	} while (option == 's' or option == 'S');

	system("pause");

	return 0;
}