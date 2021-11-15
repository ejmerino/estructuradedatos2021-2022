/* Universidad de las Fuerzas Armadas - ESPE
   Carrera: Software
   Tema: Matriz Potencia
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 12/11/2021
   Fecha de modificación: 14/11/2021
*/
#pragma once
#include "Matriz.h"
#include <exception>

class Operaciones
{

public:
    template <typename T>
    /**
    * @brief Function to multiply matrix
    *
    * return
    */
    static inline Matriz<T> multiply_matriz_pow(Matriz<T>&, int);
    template <typename T>
    /**
    * @brief Function multiply matrix
    *
    * return
    */
    static inline Matriz<T> multiply_matriz(Matriz<T>&, Matriz<T>&);
    template <typename T>
    /**
    * @brief Function print
    *
    * return void
    */
    static void print(Matriz<T>);


};