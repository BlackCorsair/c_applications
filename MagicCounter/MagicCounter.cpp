#include <iostream>	// para entrada/salida
#include <stdlib.h>	// para las funciones de random
#include <time.h>	// para la funcion time que uso en random
#include <vector>	// para crear la lista vector<Jugador>
#include "Jugador.h"	// a�ade la librer�a Jugador, que contiene la clase Jugador con sus atributos y m�todos
#include "MyForm.h"

using namespace std;

vector<Jugador> introducir_jugadores(int numero_jugadores); // m�todo que crea y guarda en una lista tantos jugadores como se desee
void inicializacion_jugadores(vector<Jugador> &lista_jugadores, int vida); // m�todo que inicializa los jugadores de la lista que se le pasa como argumento
void nombre_aleatorio(Jugador &player);	// m�todo que da un nombre aleatorio a player de una lista de nombres


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
// m�todo para a�adir jugadores a una lista
vector<Jugador> introducir_jugadores(int numero_jugadores){
	Jugador player;	// creamos el objeto Jugador que iremos a�adiendo
	vector<Jugador> lista_jugadores;	// creamos una lista de jugadores donde vamos introduciendo jugadores seg�n entren en la partida
	// bucle for que introduce tantos jugadores como se haya especificado
	for (int i = 0; i < numero_jugadores; i++)
	{
		lista_jugadores.push_back(player);	// a�ade al final de la lista un objeto jugador (con sus propios atributos)
	}
	return lista_jugadores;	// devuelve la lista de jugadores con los jugadores ya a�adidos
}
// m�todo para inicializar la lista de jugadores
/*
	recibe una referencia a una lista de jugadores y un n�mero de vidas, de forma que las modificaciones en el m�todo se guarden directamente
	en esa lista y no sea necesario devolver ning�n valor. Esto ayuda a la optimizaci�n de la memoria y a la velocidad
	de ejecuci�n.
*/
void inicializacion_jugadores(vector<Jugador> &lista_jugadores, int vida){
	// bucle for que recorre la lista de jugadores y a cada jugador le asigna 0 contadores de veneno, "vida" n�mero de vidas
	// y hace una llamada a "nombre_aleatorio" para darle a cada jugador un nombre aleatorio
	for (size_t i = 0; i < lista_jugadores.size(); i++)
	{
		lista_jugadores[i].set_vida(vida);
		lista_jugadores[i].set_veneno(0);
		nombre_aleatorio(lista_jugadores[i]);
	}	
	// comprobaci�n de que no hay nombres repetidos mediante dos bucles for. Lo que hace es comparar un objeto
	// de la lista con el resto de objetos de la lista  y si hay coincidencia vuelve a llamar al m�todo "nombre_aleatorio"
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
// m�todo para inicializar el nombre de un jugador de forma aleatoria
/*
	recibe una referencia a un objeto jugador, de forma que las modificaciones en el m�todo se guarden directamente en ese objeto.
	El m�todo usa "case" y un n�mero aleatorio para seleccionar el nombre que se le dar� al jugador
*/
void nombre_aleatorio(Jugador &player){
	int aleatorio = rand() % 20;	// genera un n�mero aleatorio entre 0 y 19
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