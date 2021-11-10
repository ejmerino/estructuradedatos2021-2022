/*	
				Universidad de las Fuerzas Armadas ESPE
		Carrera: Ingenieria en Software
		Materia: Estructura de datos
		Tema: Plantilla-Deber 4(Área y Perímetro de un rectángulo)
		Nombre: Jhoel Chicaiza
		Fecha de creación: 01/11/2021
		Fecha de la primera modificación: 01/11/2021
*/

#include <math.h>
using namespace std;

template <class T>
void precioConDescuento(T numero1, T numero2){
	T precioConDescuento;
	T precioFinal;
	precioFinal = numero1 - ((numero2 * numero1) / 100);
	cout<<"\nEl precio final es: "<<precioFinal;
}


