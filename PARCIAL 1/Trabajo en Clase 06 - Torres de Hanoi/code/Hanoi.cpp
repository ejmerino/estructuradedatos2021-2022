/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Torres de Hanoi
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 17/11/2021
   Fecha de modificación: 17/11/2021
*/

#include "Hanoi.h"
#include <iostream>


template <typename T>
Hanoi<T>::Hanoi() {

}

template <typename T>
Hanoi<T>::~Hanoi() {

}

template <typename T>
void Hanoi<T>::torre_hanoi(T num, char a, char c, char b) {
	if (num == 1) {
		cout << "\nMover el disco " << num << " desde el poste " << a << " hasta el poste " << b << endl;
	}
	else {
		torre_hanoi(num - 1, a, b, c);
		cout << "\nMover el disco " << num << " desde el poste " << a << " hasta el poste " << b << endl;
		torre_hanoi(num - 1, c, a, b);
	}
}