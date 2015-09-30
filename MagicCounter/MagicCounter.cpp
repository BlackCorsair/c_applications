#include <iostream>	// para entrada/salida
#include <stdlib.h>	// para las funciones de random
#include <time.h>	// para la funcion time que uso en random
#include <vector>	// para crear la lista vector<Jugador>
#include "Jugador.h"	// añade la librería Jugador, que contiene la clase Jugador con sus atributos y métodos
#include "MyForm.h"

using namespace std;

vector<Jugador> introducir_jugadores(int numero_jugadores); // método que crea y guarda en una lista tantos jugadores como se desee
void inicializacion_jugadores(vector<Jugador> &lista_jugadores, int vida); // método que inicializa los jugadores de la lista que se le pasa como argumento
void nombre_aleatorio(Jugador &player);	// método que da un nombre aleatorio a player de una lista de nombres


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MagicWindowApplication::MyForm form;
	Application::Run(%form);
}
// método para añadir jugadores a una lista
vector<Jugador> introducir_jugadores(int numero_jugadores){
	Jugador player;	// creamos el objeto Jugador que iremos añadiendo
	vector<Jugador> lista_jugadores;	// creamos una lista de jugadores donde vamos introduciendo jugadores según entren en la partida
	// bucle for que introduce tantos jugadores como se haya especificado
	for (int i = 0; i < numero_jugadores; i++)
	{
		lista_jugadores.push_back(player);	// añade al final de la lista un objeto jugador (con sus propios atributos)
	}
	return lista_jugadores;	// devuelve la lista de jugadores con los jugadores ya añadidos
}
// método para inicializar la lista de jugadores
/*
	recibe una referencia a una lista de jugadores y un número de vidas, de forma que las modificaciones en el método se guarden directamente
	en esa lista y no sea necesario devolver ningún valor. Esto ayuda a la optimización de la memoria y a la velocidad
	de ejecución.
*/
void inicializacion_jugadores(vector<Jugador> &lista_jugadores, int vida){
	// bucle for que recorre la lista de jugadores y a cada jugador le asigna 0 contadores de veneno, "vida" número de vidas
	// y hace una llamada a "nombre_aleatorio" para darle a cada jugador un nombre aleatorio
	for (size_t i = 0; i < lista_jugadores.size(); i++)
	{
		lista_jugadores[i].set_vida(vida);
		lista_jugadores[i].set_veneno(0);
		nombre_aleatorio(lista_jugadores[i]);
	}	
	// comprobación de que no hay nombres repetidos mediante dos bucles for. Lo que hace es comparar un objeto
	// de la lista con el resto de objetos de la lista  y si hay coincidencia vuelve a llamar al método "nombre_aleatorio"
	for (size_t i = 0; i < lista_jugadores.size(); i++)
	{
		for (size_t j = i + 1; j < lista_jugadores.size(); j++)
		{
			if (lista_jugadores[i].get_nombre() == lista_jugadores[j].get_nombre()){
				nombre_aleatorio(lista_jugadores[j]);
			}
		}
	}
}
// método para inicializar el nombre de un jugador de forma aleatoria
/*
	recibe una referencia a un objeto jugador, de forma que las modificaciones en el método se guarden directamente en ese objeto.
	El método usa "case" y un número aleatorio para seleccionar el nombre que se le dará al jugador
*/
void nombre_aleatorio(Jugador &player){
	int aleatorio = rand() % 20;	// genera un número aleatorio entre 0 y 19
	switch (aleatorio)
	{
	case 0:
		player.set_nombre("Justin	");
		break;
	case 1:
		player.set_nombre("Yoda	");
		break;
	case 2:
		player.set_nombre("Merlin	");
		break;
	case 3:
		player.set_nombre("Nemo	");
		break;
	case 4:
		player.set_nombre("Sauron	");
		break;
	case 5:
		player.set_nombre("Sr.Bigotitos");
		break;
	case 6:
		player.set_nombre("Anakin	");
		break;
	case 7:
		player.set_nombre("Frodo	");
		break;
	case 8:
		player.set_nombre("Galadriel");
		break;
	case 9:
		player.set_nombre("Marcus	");
		break;
	case 10:
		player.set_nombre("Jefe Maestro");
		break;
	case 11:
		player.set_nombre("Cortana	");
		break;
	case 12:
		player.set_nombre("Corvo	");
		break;
	case 13:
		player.set_nombre("Chandra	");
		break;
	case 14:
		player.set_nombre("Gandalf	");
		break;
	case 15:
		player.set_nombre("Man Pe'Tao");
		break;
	case 16:
		player.set_nombre("Elvis Cochuelo");
		break;
	case 17:
		player.set_nombre("El Faker");
		break;
	case 18:
		player.set_nombre("NoTanIncreible");
		break;
	case 19:
		player.set_nombre("Tio la Vara");
		break;
	default:
		player.set_nombre("Player");
	}
}