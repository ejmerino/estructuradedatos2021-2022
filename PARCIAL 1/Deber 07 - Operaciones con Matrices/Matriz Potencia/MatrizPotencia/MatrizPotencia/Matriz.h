/* Universidad de las Fuerzas Armadas - ESPE
   Carrera: Software
   Tema: Matriz Potencia
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 12/11/2021
   Fecha de modificación: 14/11/2021
*/
#pragma once
#include <exception>

template <class T>
class Matriz
{
private:
	T** _matrix = nullptr;
	int _SIZE_;

public:
	/**
	* @brief Function constructor
	*
	* return
	*/
	Matriz() = default;
	/**
	* @brief Function Matrix
	*
	* return
	*/
	Matriz(int);
	/**
	* @brief Function setter
	*
	* return void
	*/
	void set_matrix(T**);
	/**
	* @brief Function getter
	*
	* return T
	*/
	T** get_matrix() const noexcept;
	/**
	* @brief Function getter
	*
	* return int
	*/
	int get_size() const noexcept;
	/**
	* @brief Function free
	*
	* return void
	*/
	void free();
	/**
	* @brief Function ingreso
	*
	* return char*
	*/
	char* ingreso(char*);
};

