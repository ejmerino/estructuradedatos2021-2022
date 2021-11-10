/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Edad Futura - 3 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 03/07/2021
   Fecha de modificación: 03/07/2021
*/
#include "Datos.h"
#include "Datos.cpp"
#include "Operaciones.h"
#include "Operaciones.cpp"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main() {
	int edad,anio;
	Datos<int> _dat;
	Operaciones<int> _op;
	char opcion = { };
	do {
		cout << "Ingrese su edad: ";
		cin >> edad;
		_dat.set_edad(edad);
		cout << "Ingrese en que anio quiere saber que edad tiene: ";
		cin >> anio;
		_dat.set_anio(anio);
		if (_dat.get_anio() > 2021) {
			_dat.to_string1();
			cout << _op.edad_futura(_dat) << " anios en " << _dat.get_anio() << endl;
		} else if(_dat.get_anio() < 2021) {
			if (_op.edad_futura(_dat) == 0) {
				_dat.to_string5();
				cout << _dat.get_anio()<<endl;
			} else if (_op.edad_futura(_dat)<0) {
				_dat.to_string4();
			} else {
			_dat.to_string2();
			cout << _op.edad_futura(_dat) << " anios en " << _dat.get_anio() << endl;
			}
			} else if (_dat.get_anio() == 2021) {
			_dat.to_string3();
			cout << _op.edad_futura(_dat) << " anios en " << _dat.get_anio() << endl;
			} else {

			}
		cout << endl << "Desea realizar otra operacion " << endl;
		cout << "Si = 's'" << endl 	<< "No = presione cualquier otra tecla" << endl;
		cin >> opcion;
		system("cls");

	} while (opcion == 'S' or opcion == 's');

	system("pause");

	return 0;
}