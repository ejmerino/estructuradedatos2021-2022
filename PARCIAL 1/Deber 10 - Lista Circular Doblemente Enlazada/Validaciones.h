/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 10 - Lista Circular Doblemente Enlazada
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 24/11/2021
   Fecha de modificación: 24/11/2021
*/

#pragma once

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
bool esInt(std::string dato) {
	bool esInt = true;
	int longitud = dato.size();
	if (longitud == 0) {
		esInt = false;
	}
	else if (longitud == 1 && !isdigit(dato[0])) {
		esInt = false;
	}
	else {
		int i = 0;
		if (dato[0] == '+' || dato[0] == '-') {
			i++;
		}
		while (i < longitud) {
			if (!isdigit(dato[i])) {
				esInt = false;
				break;
			}
			i++;
		}
	}
	return esInt;
}
bool esFloat(std::string dato) {
	bool esFloat = true;
	int longitud = dato.size();
	int punto = 0;
	if (longitud == 0) {
		esFloat = false;
	}
	else if (longitud == 1 && !isdigit(dato[0])) {
		esFloat = false;
	}
	else {
		int i = 0;
		if (dato[0] == '-' || dato[0] == '+') {
			i++;
		}
		if (dato[i] == '.') {
			return false;
		}
		while (i < longitud) {
			if (dato[i] == '.') {
				punto++;
			}
			if (!(isdigit(dato[i]) || dato[i] == '.') || punto == 2) {
				esFloat = false;
				break;
			}
			i++;
		}
	}
	return esFloat;
}
bool esCadena(std::string dato) {
	int longitud = dato.size();
	int i = 0;
	if (longitud == 0) {
		return false;
	}
	while (i < longitud) {
		if (isdigit(dato[i])) {
			return false;
		}
	}
	return true;
}
