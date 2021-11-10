/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Sobrecarga de Operadores
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear

   Fecha de creación: 04/11/2021
   Fecha de modificación: 05/11/2021
*/

#include "Datos.h"
#include "Operaciones.h"
#include <iostream>

using namespace std;

int main() {
	double a,b;
	int option=1;
	char option2 = { };
	Datos dat;
	Operaciones op;
	do {
		cout << "Que operador desea sobrecargar?" << endl;
		cout << "1.- ++ (aumento en uno)" << endl << "2.- --(decremento en uno)" << endl << "3.- >>(imprime)" << endl;
		cout << endl << "Eleccion: ";
		cin >> option;
		switch (option) {
		case 1:
			cout << endl << "Ingrese un numero: ";
			cin >> a;
			dat.set_a(a);
			cout << endl << "Sobrecargador++: " << op.operator++(dat.get_a()) << endl;
			break;
		case 2:
			cout << "Ingrese un numero: ";
			cin >> a;
			dat.set_a(a);
			cout << endl << "Sobrecargador--: " << op.operator--(dat.get_a()) << endl;
			break;
		case 3:
			cout << "Ingrese un numero de tipo int: ";
			cin >> a;
			dat.set_a(a);
			cout << "Ingrese un numero de tipo double: ";
			cin >> b;
			dat.set_b(b);
			cout << endl << "Imprime Dato tipo Int: " << (op.operator<<(dat.get_a())) << endl;
			cout << endl << "Imprime Dato tipo Double: " << (op.operator<<(dat.get_b())) << endl << endl;
			break;
		default:
			cout << "Ingrese una opcion correcta!" << endl;
			break;
		}
	cout << "Desea realizar otra vez(s/n): ";
	cin >> option2;
	system("cls");
	} while (option2 == 's' or option2 == 'S');
	system("pause");

	return 0;
}