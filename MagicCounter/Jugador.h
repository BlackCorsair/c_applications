/*
#ifndef __X_H_INCLUDED__   // if x.h hasn't been included yet...
#define __X_H_INCLUDED__   //   #define this so the compiler knows it has been included

class X { };

#endif 
*/
/*
	header file para la clase Jugador
	Jugador contiene los atributos vida, veneno y nombre
	Jugador contiene m�todos para acceder a sus atributos
	Jugador contiene m�todos para modificar sus atributos
*/

#ifndef JUGADOR_H	// if jugador.h no se ha inclu�do ya
#define JUGADOR_H	// #define this so the compiler knows it has been included

#include <string>

class Jugador{
private:
	int vida, veneno;
	std::string nombre;
public:
	// m�todos set para modificar atributos del jugador, no devuelven nada dado que s�lo modifican el atributo y no se requiere saber cu�nto se ha modificado
	void set_vida(int l);
	void set_veneno(int p);
	void set_nombre(std::string n);
	// m�todos get para acceder a los atributos del jugador, devuelven el atributo mediante 'return'. No reciben nada porque no necesitan modificar el atributo
	int get_vida();
	int get_veneno();
	std::string get_nombre();
	// m�todos para sumar y restar contadores de vida y veneno, similares a los m�todos get, pero �sta vez modifican el atributo antes de devolverlo
	// (siempre se modifica de la misma manera)
	// vida
	void vida_mas_1();
	void vida_menos_1();
	void vida_mas_5();
	void vida_menos_5();
	// veneno
	void veneno_mas_1();
	void veneno_menos_1();
	void veneno_mas_5();
	void veneno_menos_5();
};
#endif