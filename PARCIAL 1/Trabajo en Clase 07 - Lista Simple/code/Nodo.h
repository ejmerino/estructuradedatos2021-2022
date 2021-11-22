/* Universidad de las Fuerzas Armadas - ESPE
   Software
	Listas Simples
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 21/11/2021
   Fecha de modificaci�n: 21/11/2021
*/


#pragma once

template <typename T>
class Nodo {
private:
	T data;
	Nodo<T>* vinculo;
public:
	Nodo() = default;
	T getValor();
	void setValor(T);

	template <typename T>
	friend class Lista;
};