/*	
				Universidad de las Fuerzas Armadas ESPE
		Carrera: Ingenieria en Software
		Materia: Estructura de datos
		Tema: Plantilla-Deber 2
		Nombre: Jhoel Chicaiza
		Fecha de creación: 30/10/2021
		Fecha de la primera modificación: 30/10/2021
*/

#include <iostream>
#include <stdlib.h>
#include "Datos.cpp"
#include "Datos.h"
using namespace std;

int main(){
	float num1;
	
	cout<<"ingrese el numero a calcular: "<<endl;
	cin>>num1;
	
	raizCuadrada(num1);
	potencia(num1);
	
	return 0;
	
}
