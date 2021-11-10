/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Operacion con Fracciones
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 28/10/2021
   Fecha de modificación: 28/10/2021
*/

#pragma once
#include <string>

template <typename T>
class Data {
	private:
		T num1;
		T num2;
		T den1;
		T den2;
	public:
		/**
		* constructor for data
		*
		*/
		Data();
		/**
		* destructor for data
		*
		*/
		~Data();
		/**
		* @brief Function to setter the numerador 1
		*
		* @param 
		*/
		void set_num1(T);
		/**
		* @brief Function to getter the numerador 1
		*
		* @return the numerador 1
		*/
		T get_num1();
		/**
		* @brief Function to setter the numerador 2
		*
		* @param
		*/
		void set_num2(T);
		/**
		* @brief Function to getter the numerador 2
		*
		* @return the numerador 2
		*/
		T get_num2();
		/**
		* @brief Function to setter the denominador 1
		*
		* @param
		*/
		void set_den1(T);
		/**
		* @brief Function to getter the denominador 1
		*
		* @return the denominador 1
		*/
		T get_den1();
		/**
		* @brief Function to setter the denominador 2
		*
		* @param
		*/
		void set_den2(T);
		/**
		* @brief Function to getter the denominador 2
		*
		* @return the denominador 2
		*/
		T get_den2();
		/**
		* @brief Function to print in console
		*
		* @param
		*/
		void to_string();
};