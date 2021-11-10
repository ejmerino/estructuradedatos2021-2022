/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Areas Geometricas - 2 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 02/07/2021
   Fecha de modificación: 02/07/2021
*/

#include "Operaciones.h"
#include "Datos.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

using namespace std;

template <typename J>
Operaciones<J>::Operaciones() {

}

template <typename J>
Operaciones<J>::~Operaciones() {

}

template <typename J>
J Operaciones<J>::area_cuadrado(Datos<J>& calculation) {
	return pow(calculation.get_lado1(),2);
}

template <typename J>
J Operaciones<J>::area_rectangulo(Datos<J>& calculation) {
	return (calculation.get_lado1()*calculation.get_lado2());
}

template <typename J>
J Operaciones<J>::area_triangulo(Datos<J>& calculation) {
	return ((calculation.get_lado1()*calculation.get_lado2())/2);
}

template <typename J>
J Operaciones<J>::area_circulo(Datos<J>& calculation) {
	return (calculation.get_radio()*9.8696);
}