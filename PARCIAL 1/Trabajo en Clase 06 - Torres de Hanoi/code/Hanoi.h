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

#pragma once

template <typename T>
class Hanoi {
private:
	T num;
	char a;
	char b;
	char c;
public:
	Hanoi();
	~Hanoi();
	void torre_hanoi(T, char, char, char);
};
