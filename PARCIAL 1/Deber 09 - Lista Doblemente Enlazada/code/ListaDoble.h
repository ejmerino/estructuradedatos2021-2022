/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 09 - Lista Doblemente Enlazada
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 20/11/2021
   Fecha de modificación: 21/11/2021
*/

#pragma once
#include "Nodo.h"
#include "Nodo.cpp"

template<typename T>
class ListaDoble {
private:
    Nodo<T>* cabeza;
public:
    ListaDoble();
    void insertar_cola(T);
    void insertar_cabeza(T);
    void mostrar_lista();
    void borrar_cola();    
    void borrar_cabeza();    
};