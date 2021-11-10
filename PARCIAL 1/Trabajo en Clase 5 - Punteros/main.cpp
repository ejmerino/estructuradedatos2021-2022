/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Clase 10/11/2021 - Punteros (Memoria dinámica)
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 10/11/2021
   Fecha de modificación: 10/11/2021
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <conio.h>


int main() {
	int a, b, c, * d, ** e, *** f;
	a = 10;
	printf("\nValor de a: %d", a);
	printf("\nDireccion de a: %p", &a);
	printf("\n");
	d = &a;
	printf("\nPor medio de d valor de a: %d", *d);
	printf("\nPor medio de d direccion de a: %p", d);
	printf("\n");
	e = &d;
	printf("\nPor medio de e valor de a: %d", **e);
	printf("\nPor medio de e direccion de a: %p", *e);
	printf("\n");
	**e = 80;
	printf("\nValor de a: %d", a);
	printf("\nDireccion de a: %p", &a);
	printf("\n");
	return 0;
}