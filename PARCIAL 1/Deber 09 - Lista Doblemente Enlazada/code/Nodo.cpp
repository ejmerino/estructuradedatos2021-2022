/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 09 - Lista Doblemente Enlazada
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 20/11/2021
   Fecha de modificaci�n: 21/11/2021
*/

#include "Nodo.h"

template<typename T>
Nodo<T>::Nodo() {
    this->siguiente = NULL;
    this->anterior = NULL;
}