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
* @brief Function call the methods that make the procesar
*
* @return the add
*/

void procesar(int **mat1, int **mat2, int **matR, int d){
	for(int i=0;i<d;i++){
		for(int j=0;j<d;j++){
			for(int h=0;h<d;h++){
				*(*(matR+i)+j)=	*(*(matR+i)+j)+(*(*(mat1+i)+h))*(*(*(mat2+h)+j));
			}
		}
	}	
}
