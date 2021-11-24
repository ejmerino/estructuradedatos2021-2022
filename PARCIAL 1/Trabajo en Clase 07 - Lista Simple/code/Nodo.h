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

template<typename T>
class Nodo {
private:
    T dato;
    Nodo<T>* siguiente;
    Nodo<T>* anterior;
    template<typename U>
    friend class Lista;
public:
    Nodo();
};