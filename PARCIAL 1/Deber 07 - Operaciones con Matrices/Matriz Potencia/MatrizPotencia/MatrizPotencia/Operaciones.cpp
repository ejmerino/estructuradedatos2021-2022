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
#include "Operaciones.h"
#include <iostream>

template <typename T>
inline Matriz<T> Operaciones::multiply_matriz(Matriz<T>& _matrix_a, Matriz<T>& _matrix_b)
{
    Matrix<T> result(_matrix_a.get_size());
    int size = _matrix_a.get_size();

    T** _matrix_r = result.get_matrix();
    T** _matrix_1 = _matrix_a.get_matrix();
    T** _matrix_2 = _matrix_b.get_matrix();

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            for (int k = 0; k < size; ++k)
            {
                _matrix_r[i][j] += _matrix_1[i][k] * _matrix_2[k][j];
            }
        }
    }
    return result;
}

template <class T>
inline void Operaciones::print(Matriz<T> _matrix)
{
    T** _matriz_print = _matrix.get_matrix();
    int size = _matrix.get_size();
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << " " << _matriz_print[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template <typename T>
Matriz<T> Operaciones::multiply_matriz_pow(Matriz<T>& _matrix, int pow)
{
    Matrix<T> result = _matrix;
    T** _result_pow = _matrix.get_matrix();
    if (pow < 0)
    {
        throw std::runtime_error("No existe matrices en potencia negatica");
    }
    if (pow == 1)
    {
        return _matrix;
    }

    if (pow == 0)
    {
        for (int i = 0; i < _matrix.get_size(); ++i)
        {
            for (int j = 0; j < _matrix.get_size(); ++j)
            {
                if (i == j) {
                    *(*(_result_pow + i) + j) = 1;
                }
                else {
                    *(*(_result_pow + i) + j) = 0;
                }

            }
        }
        result.set_matrix(_result_pow);
    }

    if (pow >= 2)
    {
        for (int power = 0; power < pow - 1; ++power)
        {
            result = multiply_matrix(result, _matrix);
        }
    }
    return result;
}
