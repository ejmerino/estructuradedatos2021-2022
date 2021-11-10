/*	
				Universidad de las Fuerzas Armadas ESPE
		Carrera: Ingenieria en Software
		Materia: Estructura de datos
		Tema: Plantilla-Deber 3(Raiz Cubica y Cuarta de la suma de dos numeros)
		Nombre: Jhoel Chicaiza
		Fecha de creación: 31/10/2021
		Fecha de la primera modificación: 31/10/2021
*/

#include <math.h>
using namespace std;

template <class T>
void raizCubica(T numero1, T numero2){
	T raizCubica;
	T numeroResultante;
	numeroResultante=numero1+numero2;
	raizCubica=pow(numeroResultante, (float)1/3);
	cout<<"\nLa suma de los numeros es: "<<numeroResultante;
	cout<<"\n\nLa raiz cubica es: "<<raizCubica;
 
}

template <class T>
void raizCuarta(T numero1, T numero2){
	T raizCuarta;
	T numeroResultante;
	numeroResultante=numero1+numero2;
	numeroResultante=pow(numeroResultante, (float)1/4);
	cout<<"\nLa raiz cuarta es: "<<numeroResultante;
 
}


