/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 05 - Memoria Dinamica
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 12/11/2021
   Fecha de modificación: 12/11/2021
*/

#include "Metodos.h"
#include "Metodos.cpp"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

template <typename T>
int main(T argc, char** argv) {
	T t;
	T* ptr = (T*)malloc(4 * sizeof(int));
	std::cout << "Ingrese el tamanio: " << std::endl;
	std::cin >> t;
	Metodos<T>::ingresar(ptr, t);
	Metodos<T>::imprimir(ptr, t);
	Metodos<T>::procesar(ptr, t);
	Metodos<T>::imprimir(ptr, t);
	return 0;
}