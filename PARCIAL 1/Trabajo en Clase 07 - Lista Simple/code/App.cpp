/* Universidad de las Fuerzas Armadas - ESPE
   Software
	Listas Simples
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 21/11/2021
   Fecha de modificaci�n: 21/11/2021
*/


#include <iostream>
#include "Lista.h"
#include "Lista.cpp"
#include "Nodo.h"
#include "Nodo.cpp"

/**
* the main function
*
* @version: 21/11/2021
*/


using namespace std;

int main(int argc, char** argv) {
	Lista<int> lst;
	cout << "Universidad de las Fuerzas Armadas - ESPE" << endl;
	lst.estaVacia();
	lst.insertar(1);
	lst.insertar(2);
	lst.insertar(3);
	lst.mostrar();
	return 0;
}