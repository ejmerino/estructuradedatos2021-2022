#pragma once

class Operaciones {
public:
	Operaciones();
	void generar_iva(float);
	void generar_descuento(float,float);
	void generar_total_final(float, float);

private:
	float iva = 12.0;
	float total;
	float descuento;
	float total_final;
};
