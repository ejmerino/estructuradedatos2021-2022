/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 01 - Parcial 02 - Colas
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 09/12/2021
   Fecha de modificación: 09/12/2021
*/

#include <iostream>
#include <cstdlib>
#include "Cola.h"
#include "Cliente.h"
#include <ctime>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "Utils.h"
using namespace std;

void separacion();

int main(int argv, char** argc) {
	setlocale(LC_ALL, "");
	int n;
	n = Utils::Validation::validation_numbers<int>("Cuantos Clientes ingresaran a la cola:  ");
	cout << endl;
	system("cls");
	separacion();
	cout << "# Cliente\t" << "Tiempo de llegada\t" << "Tiempo de espera\t" << "Cajero no Trabaja\t" << "Tiempo de servicio\t" << "Tiempo de salida\t" << "Tiempo entre llegadas" << endl;
	separacion();
	srand(time(0));
	Cliente cliente;
	Cola clientes;
	Cola promedio;
	clientes.push(cliente);
	clientes.mostrar();
	clientes.pop();
	promedio.push(cliente);

	for (int i = 0; i < n - 1; i++) {
		cliente.calcular_tiempos(cliente);
		clientes.push(cliente);
		clientes.mostrar();
		clientes.pop();
		promedio.push(cliente);
	}
	cout << endl;
	cout << "=========================================================" << endl;
	cout << "Datos para analizar: " << endl;
	promedio.calcular_tiempos(n);
	return 0;
}

void separacion() {
	cout << "==============================================================================================================================================================" << endl;
}