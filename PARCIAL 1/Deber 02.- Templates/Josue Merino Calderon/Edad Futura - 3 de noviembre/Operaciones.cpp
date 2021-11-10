/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Edad Futura - 3 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 03/07/2021
   Fecha de modificación: 03/07/2021
*/

#include "Datos.h"
#include "Operaciones.h"
#include <iostream>

using namespace std;

template<typename A>
Operaciones<A>::Operaciones() {

}

template<typename A>
Operaciones<A>::~Operaciones() {

}

template<typename A>
A Operaciones<A>::edad_futura(Datos<A>& calculation) {
	return (calculation.get_edad() + (calculation.get_anio() - 2021));
}
