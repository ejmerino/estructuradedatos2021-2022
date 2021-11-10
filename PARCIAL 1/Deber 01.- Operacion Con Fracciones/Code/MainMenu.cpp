/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Operacion con Fracciones
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 28/10/2021
   Fecha de modificación: 28/10/2021
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Data.cpp"
#include "Operations.cpp"

/**
* the main function
*
* @version: 28/10/2021
*/

int main() {
	float num1, num2,den1,den2;
	Operations<float> _operations;
	Data<float> _data;
	char option = { };
	do {
		cout << "Ingrese el Numerador de la primera fraccion: ";
		cin >> num1;
		cout << "Ingrese el Denominador de la primera fraccion: ";
		cin >> den1;
		cout << "Ingrese el Numerador de la segunda fraccion: ";
		cin >> num2;
		cout << "Ingrese el Denominador de la segunda fraccion: ";
		cin >> den2;

		_data.set_num1(num1);
		_data.set_den1(den1);
		_data.set_num2(num2);
		_data.set_den2(den2);
		_data.to_string();

		cout << "El resultado es: " << _operations.fraccion_sup(_data) << "/"
			<< _operations.fraccion_inf(_data) << " = " << _operations.fraccion_result (_data) << endl;




		cout << endl << "Desea realizar una nueva operacion? (S/N) "<<endl;
		cin >> option;
		
		system("cls");

	} while (option == 's' or option == 'S');

	system("pause");		
	
	return 0;
}