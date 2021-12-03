/**
	Universidad de las Fuerzas Armadas - ESPE
	Corrección Prueba Conjunta
	Autor: Josué Merino Calderón
	Fecha de creación: 02/12/2021
	Fecha de modificación: 03/12/2021
**/

#pragma once

class Calculo {
	private:
		float subtotal = 0;
		float iva = 0;
		float total = 0;
		float descuento = 0;;
	public:
		Calculo() = default;
		Calculo(float subtotal, float iva, float total, float descuento);
		void mostrar_factura();		
};