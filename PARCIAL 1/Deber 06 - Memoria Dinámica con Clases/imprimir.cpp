
   
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
* @brief Function call the methods that make the imprimir
*
* @return the add
*/


void imprimir(int **mat, int d){
	for(int i=0;i<d;i++){
		for(int j=0;j<d;j++){
			printf("%d",*(*(mat+i)+j));
			printf("%*s",j+5,"");
		}
		printf("\n");
	}	
}