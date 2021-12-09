/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 01 - Parcial 02 - Colas
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 09/12/2021
   Fecha de modificación: 09/12/2021
*/

#pragma once

class Cliente {
private:
	int numero_cliente;
	int llegada;
	int espera;
	int cajeroNoTrabaja;
	int servicio;
	int salida;
	int entreLlegadas;
public:
	Cliente();
	void set_datos(int, int, int, int, int, int, int);
	void calcular_tiempos(Cliente&);
	void mostrar_calculos_tiempo();
	int get_numero();
	int get_llegada();
	int get_espera();
	int get_descanso();
	int get_servicio();
	int get_salida();
	int get_entre();
};
