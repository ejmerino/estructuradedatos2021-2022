/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Tema: Valor Iva - Correcci�n
   Autores:
   Fecha de creaci�n: 01/11/2021
   Fecha de modificaci�n: 03/11/2021
*/
#pragma once
#include "nodo.h"
#include <functional>

class ListaDobleEnlazada {
public:
    ListaDobleEnlazada() = default;

private:
    Nodo *ultimo_nodo();
    Nodo *obtener_nodo(int indice);

    Nodo *cabeza = nullptr;
    int tamanio = 0;
};
