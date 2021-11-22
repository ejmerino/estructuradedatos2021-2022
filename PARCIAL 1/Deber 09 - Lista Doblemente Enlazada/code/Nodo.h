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

#pragma once
#include <iostream>

template<typename T>
class Nodo {
private:
    T dato;
    Nodo<T>* siguiente;
    Nodo<T>* anterior;
    template<typename U>
    friend class ListaDoble;
public:
    Nodo();
};