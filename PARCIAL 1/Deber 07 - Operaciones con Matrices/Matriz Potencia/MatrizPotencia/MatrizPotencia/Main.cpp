/* Universidad de las Fuerzas Armadas - ESPE
   Carrera: Software
   Tema: Matriz Potencia
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 12/11/2021
   Fecha de modificación: 14/11/2021
*/
#pragma warning(disable : 4996)
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "Matriz.h"
#include "Operaciones.h"
#include "Matriz.cpp"
#include "Operaciones.cpp"

int main()
{
	int size;
	int pow;
	char data[5];
	char message[] = "Ingrese la dimension de la matriz: ";
	char message_2[] = "Ingrese una potencia: ";
	Matriz<int> matriz;
	strcpy(data, matriz.ingreso(message));
	size = atoi(data);
	std::cout << std::endl;
	strcpy(data, matriz.ingreso(message_2));
	pow = atoi(data);
	std::cout << std::endl;

	Matriz<int> matriz_a(size);
	Matriz<int> matriz_c(size);

	int** test = matriz_a.get_matrix();

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cout << "Ingrese los elementos de la matriz [" << (i + 1) << "]" << "[" << (j + 1) << "] : ";
			std::cin >> *(*(test + i) + j);
		}
	}
	std::cout << std::endl;
	std::cout << "La matriz generada es: " << std::endl;
	matriz_a.set_matrix(test);
	matriz_c = Operaciones::multiply_matriz_pow(matriz_a, pow);
	Operaciones::print(matriz_c);
	return EXIT_SUCCESS;
}