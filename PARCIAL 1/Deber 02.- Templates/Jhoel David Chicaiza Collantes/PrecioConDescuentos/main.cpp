/*	
				Universidad de las Fuerzas Armadas ESPE
		Carrera: Ingenieria en Software
		Materia: Estructura de datos
		Tema: Plantilla-Deber 4(�rea y Per�metro de un rect�ngulo)
		Nombre: Jhoel Chicaiza
		Fecha de creaci�n: 01/11/2021
		Fecha de la primera modificaci�n: 01/11/2021
*/

#include <iostream>
#include <stdlib.h>
#include "Operaciones.cpp"
#include "Operaciones.h"
using namespace std;

int main(){
	float num1,num2;
	
	cout<<"ingrese el precio: "<<endl;
	cin>>num1;
	cout<<"ingrese el descuento: "<<endl;
	cin>>num2;
	
	precioConDescuento(num1,num2);
	
	
	return 0;
	
}
