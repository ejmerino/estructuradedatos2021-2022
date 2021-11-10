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
void areaYPerimetro(T numero1, T numero2){
	T areaYPerimetro;
	T area;
	T perimetro;
	area=numero1*numero2;
	perimetro=numero1+numero2+numero1+numero2;
	cout<<"\nEl area es: "<<area;
	cout<<"\nEl perimetro es: "<<perimetro;
 
}


