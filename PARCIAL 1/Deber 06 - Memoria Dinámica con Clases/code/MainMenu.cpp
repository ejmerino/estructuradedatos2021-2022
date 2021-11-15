/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Operacion con Fracciones
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 14/11/2021
   Fecha de modificación: 14/11/2021
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "encerar.cpp"
#include "imprimir.cpp"
#include "ingresar.cpp"
#include "procesar.cpp"
#include "segmentar.cpp"
#include "datos.cpp"

using namespace std;



int main(int argc, char** argv) {
	datos<int> _datos;
	int d;
	int **m1,**m2,**mr;
	char option = { };
	do {
			cout << "Ingrese la dimension: ";
			cin >> d;
			_datos.set_d(d);
			m1=segmentar(d);
			m2=segmentar(d);
			mr=segmentar(d);
			encerar(m1,d);
			encerar(m2,d);
			encerar(mr,d);
			ingresar(m1,d);
			ingresar(m2,d);
			printf("\n");
			imprimir(m1,d);
			printf("\n");
			imprimir(m2,d);
			printf("\n");
			procesar(m1,m2,mr,d);
			printf("\n");
			imprimir(mr,d);
			cout << endl << endl << "Desea realizar una nueva dimension? (S/N) " << endl;
			cin >> option;
		system("cls");
	} while (option == 's' or option == 'S');
	return 0;
}