#include <string>
#include "Jugador.h"

// getters
std::string Jugador::get_nombre(){
	return nombre;
}
int Jugador::get_vida(){
	return vida;
}
int Jugador::get_veneno(){
	return veneno;
}
 // setters
void Jugador::set_nombre(std::string n){
	nombre = n;
}
void Jugador::set_veneno(int p){
	veneno = p;
}
void Jugador::set_vida(int l){
	vida = l;
}
 // contadores vida
void Jugador::vida_mas_1(){
	vida++;
}
void Jugador::vida_menos_1(){
	vida--;
}
void Jugador::vida_mas_5(){
	vida += 5;
}
void Jugador::vida_menos_5(){
	vida -= 5;
}
// contadores veneno
void Jugador::veneno_mas_1(){
	veneno++;
}
void Jugador::veneno_menos_1(){
	veneno--;
}
void Jugador::veneno_mas_5(){
	veneno += 5;
}
void Jugador::veneno_menos_5(){
	veneno -= 5;
}