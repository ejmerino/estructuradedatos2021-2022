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

#include "Matriz.h"

template<typename T>
Matriz<T>::Matriz()
{
    m_rows = 4;
    m_cols = 4;
}

template<typename T>
Matriz<T>::Matriz(const Matriz& m)
{
    *this = m;
}

template<typename T>
Matriz<T>::Matriz(int rows, int cols)
{
    m_cols = cols;
    m_rows = rows;
    m_matriz = new T * [m_rows];

    for (int i = 0; i < m_rows; i++) {
        m_matriz[i] = new T[m_cols];
    }
}

template<typename T>
Matriz<T>::~Matriz() {}

template<typename T>
Matriz<T> Matriz<T>::operator* (const Matriz& matriz_2)
{
    Matriz matriz_result(m_rows, matriz_2.m_cols);
    T total=0;
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < matriz_2.m_cols; j++) {
            for (int k = 0; k < m_cols; k++) {
                total += (m_matriz[i][k] * matriz_2.m_matriz[k][j]);
            }
            matriz_result.m_matriz[i][j] = total;           
            total = 0;
        }
    }
    return matriz_result;
}

template<typename T>
void Matriz<T>::delete_matriz()
{
    for (int i = 0; i < m_rows; i++) {
        delete[] m_matriz[i];
    }
    delete[] m_matriz;
}

template<typename T>
void Matriz<T>::fill_by_user()
{
    for (int i = 0; i < m_rows; i++) {
        cout << "Fila " << i + 1 << endl;
        for (int j = 0; j < m_cols; j++) {
            cout << "Ingresa el elemento " << j + 1 << ":" << endl;
            cin >> m_ele;
            m_matriz[i][j] = m_ele;
        }
        cout << endl;
    }   
}

template<typename T>
void Matriz<T>::multiply_by_scalar(T scalar)
{
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            m_matriz[i][j] = m_matriz[i][j] * scalar;
        }
    }
    cout << "Se multiplicó a la Matriz por el escalar " << scalar << endl;
}

// Imprimir Matriz
template<typename T>
void Matriz<T>::print_matriz()
{
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            cout << m_matriz[i][j] << " ";
        }
        cout << endl << endl;
    }
    cout << endl << endl;
}
