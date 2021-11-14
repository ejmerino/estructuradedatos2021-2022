#include <iostream>
#include <wchar.h>
#include <locale.h>
#include "Matriz.h"
#include "Matriz.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));
    int opcion = 0;
    int opcion2 = 0;
    int opcion3 = 0;
    int n_rows;
    int n_cols;
    int col_1;
    int col_2;
    int row_1;
    int row_2;
    int scalar;

    cout << "\nIngrese los datos con los que se trabajará";
    cout << "\nIngrese número de filas: ";
    cin >> n_rows;
    cout << "\nIngrese número de columnas: ";
    cin >> n_cols;
    cout << endl;

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
    return 0;
}