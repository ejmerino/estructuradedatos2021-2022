/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 05 - Memoria Dinamica
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 12/11/2021
   Fecha de modificación: 12/11/2021
*/


#include <iostream>
#include "Metodos.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

template<typename T>
void Metodos<T>::ingresar(T* p, T t) {
	T i;
	for (i = 0; i < t; i++) {
		printf("Ingrese el valor entero: ");
		scanf("%d", *(&p) + i);
	}
}
template<typename T>
void Metodos<T>::imprimir(T* p, T t) {
	T i;
	for (i = 0; i < t; i++) {
		printf("\nValor ingresado: ");
		printf("%d", *(&(*p)));
		*(p++);
	}
}
template<typename T>
void Metodos<T>::procesar(T* p, T t) {
	T i, e;
	printf("Ingrese el escalr");
	scanf("%d", &e);
	for (i = 0; i < t; i++) {
		*p = (*(&(*p))) * e;
		*(p++);
	}
}