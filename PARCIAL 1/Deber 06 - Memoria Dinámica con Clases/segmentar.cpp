/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Operacion con Fracciones
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 14/11/2021
   Fecha de modificación: 14/11/2021
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "datos.h"

/**
* @brief Function call the methods that make the segmentar
*
* @return the add
*/

int **segmentar(int d){
	int **mat, j;
	mat=(int **)malloc(d*sizeof(int*));
	for(j=0;j<d;j++){
		*(mat+j)=(int *)malloc(d*sizeof(int));			
	}
	return mat;	
}