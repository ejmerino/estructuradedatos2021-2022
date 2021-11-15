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
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "Matriz.h"


template <class T>
Matriz<T>::Matriz(int SIZE) : _SIZE_(SIZE)
{
	if (SIZE < 2)
	{
		throw std::runtime_error("El tamaÃ±o de la matriz debe ser minimo 2");
	}
	_matrix = (T**)std::calloc(SIZE, sizeof(T*));
	for (int i = 0; i < SIZE; ++i)
	{
		_matrix[i] = (T*)std::calloc(SIZE, sizeof(T));
	}
}

template <class T>
void Matriz<T>::set_matrix(T** _new_matrix)
{
	for (int i = 0; i < _SIZE_; ++i)
	{
		for (int j = 0; j < _SIZE_; ++j)
		{
			*(*(_matrix + i) + j) = *(*(_new_matrix + i) + j);
		}
	}
}

template <class T>
T** Matriz<T>::get_matrix() const noexcept
{
	return _matrix;
}

template <class T>
int Matriz<T>::get_size() const noexcept
{
	return _SIZE_;
}
template <class T>
void Matriz<T>::free()
{
	for (int i = 0; i < _SIZE_; i++)
	{
		std::cout << i << std::endl;
		free(_matrix[i]);
	}

	free(_matrix);
}

template<class T>
char* Matriz<T>::ingreso(char* msj)
{
	char dato[5];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if (c >= '0' && c <= '9') {
			printf("%c", c);
			dato[i++] = c;
		}
	}
	dato[i] = '\0';
	return dato;
}
