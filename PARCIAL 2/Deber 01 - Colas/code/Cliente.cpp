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

#include "Cliente.h"
#include "Calculo.h"
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

Cliente::Cliente() {
	Calculo calculo;
	this->numero_cliente = 1;
	this->llegada = calculo.random(1, 25);
	this->espera = 0;
	this->cajeroNoTrabaja = 0;
	this->servicio = calculo.random(1, 16);
	this->salida = llegada + espera + servicio;
	this->entreLlegadas = llegada;
}

void Cliente::set_datos(int nCliente, int llegada,
	int espera, int cajeroNoTrabaja,
	int servicio, int salida,
	int entreLlegadas) {
	this->numero_cliente = nCliente;
	this->llegada = llegada;
	this->espera = espera;
	this->cajeroNoTrabaja = cajeroNoTrabaja;
	this->servicio = servicio;
	this->salida = salida;
	this->entreLlegadas = entreLlegadas;
}

void Cliente::calcular_tiempos(Cliente& cliente)
{
	Calculo calculo;
	int n = cliente.get_numero();
	int llegadaAnterior = cliente.get_llegada();
	int salidaAnterior = cliente.get_salida();
	int entreLlegadas = cliente.get_entre();

	int llegada, espera, cajeroNoTrabaja,
		servicio, salida;

	n++;
	llegada = llegadaAnterior + calculo.random(1, 25);
	espera = (calculo.max(salidaAnterior, llegada)) - llegada;
	servicio = calculo.random(1, 16);
	salida = llegada + espera + servicio;
	cajeroNoTrabaja = (calculo.max(llegada, salidaAnterior)) - salidaAnterior;
	entreLlegadas = llegada;
	entreLlegadas -= llegadaAnterior;

	set_datos(n, llegada, espera, cajeroNoTrabaja, servicio, salida, entreLlegadas);


}


void Cliente::mostrar_calculos_tiempo() {
	cout << numero_cliente << "\t\t\t" << llegada << "\t\t\t" << espera << "\t\t\t" << cajeroNoTrabaja << "\t\t\t" << servicio << "\t\t\t" << salida << "\t\t\t" << entreLlegadas << endl;
	cout << "_____________________________________________________________________________________________________________________________________________________________" << endl;
}

int Cliente::get_numero()
{
	return numero_cliente;
}

int Cliente::get_llegada()
{
	return llegada;
}

int Cliente::get_espera()
{
	return espera;
}

int Cliente::get_descanso()
{
	return cajeroNoTrabaja;
}

int Cliente::get_servicio()
{
	return servicio;
}

int Cliente::get_salida()
{
	return salida;
}

int Cliente::get_entre()
{
	return entreLlegadas;
}
