/* Universidad de las Fuerzas Armadas - ESPE
   Software
	Listas Simples
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 21/11/2021
   Fecha de modificaci�n: 21/11/2021
*/

#include "Nodo.h"
#include "Lista.h"

/**
*
* @version: 21/11/2021/
*/


template <typename T>
T Nodo <T>::getValor() {
	return this->data;
}

template <typename T> 
void Nodo<T>::setValor(T _data) {
	this->data = _data;
}