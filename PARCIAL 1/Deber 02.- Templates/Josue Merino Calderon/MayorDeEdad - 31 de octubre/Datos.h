#pragma once
#include <string>
/**
* this class defines objects that contain Datos
*
* @version: 31/10/2021
*/
template <typename T>
class Datos {
private:
	T nombre;
	T edad;
public:
	/*
	Costructor and destructor for Datos class
	*/
	Datos();
	~Datos();
	/**
	* @brief Function to setter nombre
	*
	* @param
	*/
	void set_nombre(T);
	/**
	* @brief Function to getter nombre
	*
	* @param
	*/
	T get_nombre();
	/**
	* @brief Function to setter edad
	*
	* @param
	*/
	void set_edad(T);
	/**
	* @brief Function to getter edad
	*
	* @param
	*/
	T get_edad();
	/**
	* @brief Function to_string 1
	*
	* @param
	*/
	void to_string1();
	/**
	* @brief Function to_string 2
	*
	* @param
	*/
	void to_string2();
};