/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Operacion con Fracciones
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 14/11/2021
   Fecha de modificación: 14/11/2021
*/

#pragma once
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
template <class T>
class Matriz {
public:
    Matriz();
    Matriz(int, int);
    Matriz(const Matriz& m);
    ~Matriz();
    Matriz<T> operator* (const Matriz& matriz_2);
    void delete_matriz();
    void fill_by_user();
    void fill_random();
    void multiply_by_scalar(T);
    void print_matriz();   
private:
    T m_ele;
    T** m_matriz;
    int m_dim_matriz;
    int m_cols;
    int m_max;
    int m_min;
    int m_rows;
};
