/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Ejercicio en clases (Implementacion de Clases)
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 09/11/2021
   Fecha de modificación: 09/11/2021
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Operations.cpp"

using namespace std;

/**
* the main function
*
* @version: 09/11/2021
*/

int main(int argc, char** argv) {

	string option = { };

	Funciones f;
	std::cout << "\nSuma elementos enteros: " << f.Sumar(1, 2, 3, 4, 5, 6, 7, 8, 9);
	std::cout << "\nSuma elementos float: " << f.Sumar(1.3f, 2.2f, .3f, 4.4f, 5.8f, 6.7f, 7.2f, 8.0f, 9.7f) << endl;

	system("pause");

	return 0;
}