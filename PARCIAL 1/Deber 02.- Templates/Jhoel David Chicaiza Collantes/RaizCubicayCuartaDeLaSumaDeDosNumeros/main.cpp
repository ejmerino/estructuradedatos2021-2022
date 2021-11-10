/*	
				Universidad de las Fuerzas Armadas ESPE
		Carrera: Ingenieria en Software
		Materia: Estructura de datos
		Tema: Plantilla-Deber 3(Raiz Cubica y Cuarta de la suma de dos numeros)
		Nombre: Jhoel Chicaiza
		Fecha de creación: 31/10/2021
		Fecha de la primera modificación: 31/10/2021
*/

#include <iostream>
#include <stdlib.h>
#include "Datos.cpp"
#include "Datos.h"
using namespace std;

int main(){
	float num1,num2;
	
	cout<<"ingrese el primer numero: "<<endl;
	cin>>num1;
	cout<<"ingrese el segundo numero: "<<endl;
	cin>>num2;
	
	raizCubica(num1,num2);
	raizCuarta(num1,num2);
	
	return 0;
	
}
