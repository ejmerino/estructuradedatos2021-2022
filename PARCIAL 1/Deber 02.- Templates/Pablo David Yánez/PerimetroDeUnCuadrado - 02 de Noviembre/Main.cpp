/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Area de un cuadrado
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 02/11/2021
   Fecha de modificacion: 02/11/2021
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
* @version: 02/11/2021
*/

int main() {

	float lado;

	Operacion<float> _operacion;

	Datos<float> _datos;

	char option = { };

	do {

		cout << "Ingrese un lado del cuadrado para obtener el perimetro de un cuadrado: ";
		cin >> lado;
		_datos.set_lado(lado);


		cout << endl << endl << "El perimetro del cuadrado es:" << endl  <<_operacion.perimetro(_datos) << endl << endl;

		cout << endl << endl << "Desea realizar una nueva operacion? (S/N) " << endl;
		cin >> option;

		system("cls");

	} while (option == 's' or option == 'S');

	system("pause");

	return 0;
}