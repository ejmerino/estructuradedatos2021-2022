/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 10 - Lista Circular Doblemente Enlazada
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 24/11/2021
   Fecha de modificación: 24/11/2021
*/

#include "Nodo.h"
Nodo::Nodo(int _dato)
{
	dato = _dato;
	siguiente = NULL;
	anterior = NULL;
}
int Nodo::getDato() {
	return dato;
}
void Nodo::setDato(int _dato) {
	dato = _dato;
}
Nodo* Nodo::getSiguiente() {
	return siguiente;
}
void Nodo::setSiguiente(Nodo* _siguiente) {
	siguiente = _siguiente;
}
Nodo* Nodo::getAnterior() {
	return anterior;
}
void Nodo::setAnterior(Nodo* _anterior) {
	anterior = _anterior;
	
}