/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Centimetros a Metros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 03/11/2021
   Fecha de modificacion: 03/11/2021
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
* @version: 03/11/2021
*/

int main() {

	float num1;

	Operacion<float> _operacion;

	Datos<float> _datos;

	char option = { };

	do {

		cout << "Ingrese el numero en cm: ";
		cin >> num1;

		_datos.set_num1(num1);

		cout << endl << endl << "El numero transformado a m es:" << endl  <<_operacion.transformacion(_datos) << "m" << endl << endl;

		cout << endl << endl << "Desea realizar una nueva operacion? (S/N) " << endl;
		cin >> option;

		system("cls");

	} while (option == 's' or option == 'S');

	system("pause");

	return 0;
}