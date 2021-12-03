/**
    Universidad de las Fuerzas Armadas - ESPE
    Corrección Prueba Conjunta
    Autor: Josué Merino Calderón
    Fecha de creación: 02/12/2021
    Fecha de modificación: 03/12/2021
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