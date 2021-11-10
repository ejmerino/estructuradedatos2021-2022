/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 04 - Leer archivos txt
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 09/11/2021
   Fecha de modificación: 10/11/2021
*/

#include <iostream>
#include <fstream>
#include <string>
#include "Operaciones.h"
using namespace std;

int main() {
	string archivo;
	cout << "\n Que nombre desea ponerle al archivo: ";
	cin >> archivo;
	ofstream _numeros = write(archivo);
	ifstream numeros = read(archivo);
	float ingreso, suma = 0.0f;
	char option = { };
	do {
		cout << "\n Ingrese un numero: ";
		cin >> ingreso;
		_numeros << ingreso << endl;
		cin.ignore();
		cout << "\n Desea ingresar otro numero s/n: ";
		cin >> option;
		cin.ignore();
	} while (option == 'S' || option == 's');

	if (!numeros.is_open()) {
		cerr << "\nNo se puede abrir el archivo" << endl;
		return EXIT_FAILURE;
	}

	while (numeros >> ingreso) {
		suma += ingreso;
	}
	cout << "\nLa Suma es = " << suma << endl;
	_numeros.close();

	return 0;
}