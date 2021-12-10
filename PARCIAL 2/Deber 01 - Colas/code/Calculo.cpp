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

#include "Calculo.h"
#include <iomanip>


int Calculo::random(int min, int max) 
{
	return rand() % ((max + 1) - min) + min;
}

int Calculo::max(int a, int b)
{
	if (a > b)
		return a;
	if (b > a)
		return b;
}