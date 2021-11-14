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

#include <iostream>
#include <wchar.h>
#include <locale.h>
#include "Matriz.h"
#include "Matriz.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");    
    char opcion4 = { };
    int opcion = 0;
    int opcion2 = 0;
    int opcion3 = 0;
    int n_rows, n_cols, col_1, col_2, row_1, row_2, scalar;
    do {
        cout << "\nIngrese los datos con los que se trabajará";
        cout << "\nIngrese número de filas: ";
        cin >> n_rows;
        cout << "\nIngrese número de columnas: ";
        cin >> n_cols;
        cout << endl;
        system("cls");
        Matriz<int> a(n_rows, n_cols);
        Matriz<int> b(n_rows, n_cols);
        Matriz<int> c(n_rows, n_cols);
        cout << "\n¿Qué desea hacer?";
        cout << "\n1.- Multiplicar por escalar";
        cout << "\n2.- Multiplicar por otra matriz";
        cout << "\nDigite su opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "\nIngrese Datos de la Matriz A" << endl;
            a.fill_by_user();
            cout << "\nMatriz A " << endl;
            a.print_matriz();
            cout << "\nIngresa el escalar: ";
            cin >> scalar;
            a.multiply_by_scalar(scalar);
            a.print_matriz();
            break;
        case 2:
            cout << "\nIngrese Datos de la Matriz A" << endl;
            a.fill_by_user();
            cout << "\nMatriz A " << endl;
            a.print_matriz();
            cout << "\nIngrese Datos de la Matriz B" << endl;
            b.fill_by_user();
            cout << "\nMatriz B " << endl;
            b.print_matriz();
            cout << "\nMatriz A * B " << endl;
            c = a * b;
            c.print_matriz();
            break;
        default:
            cout << "\n¡Ingrese una opción correcta!";
            break;
        }
        a.delete_matriz();
        b.delete_matriz();
        c.delete_matriz();
        cout << "\nDesea Hacer Otra Operación(S/N): ";
        cin >> opcion4;
        system("cls");
    } while (opcion4=='s' or opcion4=='S');
    system("pause");    
    return 0;
}