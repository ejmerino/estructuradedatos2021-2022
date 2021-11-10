/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Suma de 2 numeros
   Autores:
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 29/10/2021
   Fecha de modificaci�n: 29/10/2021
*/

#pragma once
#include <string>

template <typename T>
class Data {
	private:
		T num1;
		T num2;
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
		* @brief Function to print in console
		*
		* @param
		*/
		void to_string();
};