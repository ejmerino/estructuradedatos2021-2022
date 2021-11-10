/*	
				Universidad de las Fuerzas Armadas ESPE
		Carrera: Ingenieria en Software
		Materia: Estructura de datos
		Tema: Plantilla-Deber 1
		Nombre: Jhoel Chicaiza
		Fecha de creación: 29/10/2021
		Fecha de la primera modificación: 29/10/2021
*/

#include <iostream>
#include <stdlib.h>
#include "Datos.cpp"
#include "Datos.h"
using namespace std;

int main(){
	float num1;
	float num2;
	
	cout<<"ingrese el primer numero"<<endl;
	cin>>num1;
	cout<<"ingrese le segundo numero"<<endl;
	cin>>num2;
	
	restar(num1, num2);
	dividir(num1, num2);
	
	return 0;
	
}
