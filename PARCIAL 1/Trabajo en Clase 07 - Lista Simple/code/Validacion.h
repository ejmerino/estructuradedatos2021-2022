/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Trabajo en Clase 07 - Lista Simple
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 20/11/2021
   Fecha de modificación: 21/11/2021
*/

#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Validacion {
public:
	Validacion() = default;
	char* solo_int(char*);
	~Validacion();
};