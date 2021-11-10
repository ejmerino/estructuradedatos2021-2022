/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Ejercicio en clases (Implementacion de Clases)
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 09/11/2021
   Fecha de modificaci�n: 09/11/2021
*/

#include "Operations.h"
#include <iostream>

/**
* @brief Function call the methods that make the operation
*
* @return the add
*/

template<class... Args>

auto Funciones::Sumar(Args... args) {
	auto suma = 0.0;
	for (auto& v : { args... }) {
		suma += v;
	}
	return suma;
}

