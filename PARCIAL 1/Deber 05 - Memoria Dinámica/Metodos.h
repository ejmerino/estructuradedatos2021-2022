/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 05 - Memoria Dinamica
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 12/11/2021
   Fecha de modificaci�n: 12/11/2021
*/

#pragma once
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

template <typename T>
class Metodos {
public:
	void ingresar(T*, T);
	void imprimir(T*, T);
	void procesar(T*, T);
};