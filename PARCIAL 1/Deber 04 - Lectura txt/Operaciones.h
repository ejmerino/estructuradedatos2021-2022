/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 04 - Leer archivos txt
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 09/11/2021
   Fecha de modificación: 10/11/2021
*/

#pragma once
#include <iostream>
#include <fstream>
#include <string>

/**
* this class defines objects that contain data
*
* @version: 10/11/2021
*/
using namespace std;
/**
* @brief Function to write in a .txt
*/
ofstream write(string nombre) {
	nombre = nombre + ".txt";
	ofstream _numeros(nombre);
	return _numeros;
}
/**
* @brief Function to read in a .txt
*/
ifstream read(string nombre) {
	nombre = nombre + ".txt";
	ifstream numeros(nombre);
	return numeros;
}