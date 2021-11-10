/*	
				Universidad de las Fuerzas Armadas ESPE
		Carrera: Ingenieria en Software
		Materia: Estructura de datos
		Tema: Plantilla-Deber 2
		Nombre: Jhoel Chicaiza
		Fecha de creación: 30/10/2021
		Fecha de la primera modificación: 30/10/2021
*/

#include <math.h>
using namespace std;

template <class T>
void raizCuadrada(T numero1){
	T raizCuadrada;
	raizCuadrada=sqrt(numero1);
	cout<<"\nLa raiz cuadrada es: "<<raizCuadrada;
 
}

template <class T>
void potencia(T numero1){
	T potencia;
	potencia=pow(numero1, 2);
	cout<<"\nLa potencia es: "<<potencia;
 
}


