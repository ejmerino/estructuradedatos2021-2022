/*	
				Universidad de las Fuerzas Armadas ESPE
		Carrera: Ingenieria en Software
		Materia: Estructura de datos
		Tema: Plantilla-Deber 6(Transformar días, horas y minutos a segundos)
		Nombre: Jhoel Chicaiza
		Fecha de creación: 03/11/2021
		Fecha de la primera modificación: 03/11/2021
*/

#include <iostream>
#include <stdlib.h>
#include "Operaciones.cpp"
#include "Operaciones.h"
using namespace std;

int main(){
	float num1,num2,num3;
	
	cout<<"Ingrese los dias: "<<endl;
	cin>>num1;
	cout<<"Ingrese las horas: "<<endl;
	cin>>num2;
	cout<<"Ingrese los minutos: "<<endl;
	cin>>num3;
	
	transformacionSegundos(num1,num2,num3);
	
	return 0;
	
}
