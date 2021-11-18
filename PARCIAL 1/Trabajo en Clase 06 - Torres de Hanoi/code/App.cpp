/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Torres de Hanoi
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 17/11/2021
   Fecha de modificaci�n: 17/11/2021
*/

#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "Hanoi.h"
#include "Hanoi.cpp"

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	Hanoi<int> _hanoi;
	int num;
	char a, b, c;
	cout << "Universidad de las Fuerzas Armadas - ESPE" << endl;
	cout << "\nDiscos A,B,C\n";
	cout << "\nIngrese el numero de discos: ";
	cin >> num;
	_hanoi.torre_hanoi(num, 'A', 'B', 'C');
	return 0;
}