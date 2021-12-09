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

#include "Cola.h"
#include "Cliente.h"

void Cola::mostrar() const 
{

	Nodo<Cliente>* p;
	p = primero;

	for (int i = 0; i < size; i++) {
		p->dato.mostrar_calculos_tiempo();
		p = p->siguiente;
	}
}

void Cola::calcular_tiempos(int n)
{
	float espera, noTrabaja, servicio;
	int clientesEnCola = 0;
	Nodo<Cliente>* p;
	p = primero;
	espera = p->dato.get_espera();
	noTrabaja = p->dato.get_descanso();
	servicio = p->dato.get_servicio();

	for (int i = 0; i < size; i++) 
	{
		if (p->dato.get_espera() > 0)
			clientesEnCola++;
		espera += p->dato.get_espera();
		noTrabaja += p->dato.get_descanso();
		servicio += p->dato.get_servicio();
		p = p->siguiente;
	}

	espera = espera;
	noTrabaja = noTrabaja;
	servicio = servicio;

	mostrar_promedio(espera, noTrabaja, clientesEnCola, servicio);
}

void Cola::mostrar_promedio(float t_espera, float t_no_trabaja, float clientes_esperando, float t_servicio)
{
	cout << "=========================================================" << endl;
	cout << "Tiempo de espera total: " << t_espera << " minutos" << endl;
	cout << "Tiempo que el cajero no trabaja: " << t_no_trabaja << " minutos" << endl;
	cout << "Clientes que esperaron en la cola: " << clientes_esperando << endl;
	cout << "Tiempo de servicio: " << t_servicio << " minutos" << endl;
	cout << "=========================================================" << endl;
}
