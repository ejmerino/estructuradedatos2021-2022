/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Multiplicacion y Division de 2 numeros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 30/10/2021
   Fecha de modificacion: 30/10/2021
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Datos.cpp"
#include "Operaciones.cpp"

/**
* the main function
*
* @version: 20/05/2021/
*/

using namespace std;

int main() {
	float num1, num2;
	Operaciones<float> _operaciones;
	Datos<float> _datos;
	int option = 0;

	do {
		cout << "1. Multiplicacion" << endl;
		cout << "2. Division" << endl;
		cout << "3. Salir" << endl;
		cout << endl << "Elija opcion: ";
		cin >> option;
		switch (option) {
		case 1:
			cout << endl << "Ingrese 1er numero: ";
			cin >> num1;
			cout << endl << "Ingrese 2do numero: ";
			cin >> num2;
			_datos.setNum1(num1);
			_datos.setNum2(num2);
			_datos.to_string();

			cout << endl << "Multiplicacion: " << _operaciones.multiplicacion(_datos) << endl;
			system("pause");
			system("cls");
			break;

		case 2:
			cout << endl << "Ingrese 1er numero: ";
			cin >> num1;
			cout << endl << "Ingrese 2do numero: ";
			cin >> num2;
			_datos.setNum1(num1);
			_datos.setNum2(num2);
			_datos.to_string();

			cout << endl << "Division: " << _operaciones.division(_datos) << endl;
			system("pause");
			system("cls");
			break;

		default:
			cout << endl << "Ingrese una opcion correcta." << endl;
			system("pause");
			system("cls");
			break;

		}
	} while (option != 3);
	return 0;
}