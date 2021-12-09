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

#pragma once
#include "Lista.h"
#include "Cliente.h"

class Cola : public Lista<Cliente> {
public:
	void mostrar() const;
	void calcular_tiempos(int n);
	void mostrar_promedio(float, float, float, float);
};