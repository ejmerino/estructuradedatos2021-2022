/**
    Universidad de las Fuerzas Armadas - ESPE
    Correcci�n Prueba Conjunta
    Autor: Josu� Merino Calder�n
    Fecha de creaci�n: 02/12/2021
    Fecha de modificaci�n: 03/12/2021
**/

#pragma once
#include "Lista.h"
#include "Calculo.h"
#include "Lista.cpp"

class ListaCalculo :public Lista<Calculo> {

public:
		ListaCalculo() = default;
		void mostrarCalculos() const;
};