/*	
				Universidad de las Fuerzas Armadas ESPE
		Carrera: Ingenieria en Software
		Materia: Estructura de datos
		Tema: Plantilla-Deber 6(Transformar días, horas y minutos a segundos)
		Nombre: Jhoel Chicaiza
		Fecha de creación: 03/11/2021
		Fecha de la primera modificación: 03/11/2021
*/

#include <math.h>
using namespace std;

template <class T>
void transformacionSegundos(T dia, T hora, T minuto){
	T transformacionSegundos;
	T transformacionDia;
	T transformacionHora;
	T transformacionMinutos;
	T totalASegundos;
	transformacionDia = dia * 24 * 60 * 60;
	transformacionHora = hora * 60 * 60;
	transformacionMinutos = minuto *60;
	totalASegundos = transformacionDia + transformacionHora + transformacionMinutos;
	
	cout<<"\nLa cantidad de segundos totales es: "<<totalASegundos;
}


