/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Promedio de 2 numeros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 31/10/2021
   Fecha de modificacion: 31/10/2021
*/


#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Datos.cpp"
#include "Operacion.cpp"

using namespace std;

/**
* the main function
*
* @version: 30/10/2021
*/

int main() {

	float num1, num2;

	Operacion<float> _operacion;

	Datos<float> _datos;

	char option = { };

	do {

		cout << "Ingrese el 1er numero: ";
		cin >> num1;
		cout << "Ingrese el 2do numero: ";
		cin >> num2;

		_datos.set_num1(num1);
		_datos.set_num2(num2);

		cout << endl << endl << "El promedio es:" << endl << endl << _operacion.promedio(_datos);

		cout << endl << endl << "Desea realizar una nueva operacion? (S/N) " << endl;
		cin >> option;

		system("cls");

	} while (option == 's' or option == 'S');

	system("pause");

	return 0;
}