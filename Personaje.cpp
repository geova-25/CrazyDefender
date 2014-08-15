
#include <iostream>
using std::cout;
using std::endl;
#include "Personaje.h"
using std::cout;
using std::endl;
#include <SDL/SDL.h>

Personaje::Personaje(){

}
    void Personaje::morir(){

    }

	void Personaje::explotar(){}

	void Personaje::moverse(){}

	void Personaje::liberarDeMemoria(){}

    void Personaje::setResistencia(int resistencia){}

    int Personaje::getResistencia(){

    	return resistencia;
    }
    void Personaje::imprimir(){
        	cout<<"se creo nuevo personaje"<< endl;
    }

    void Personaje::dibujar(){

    }

    void Personaje::liberar(){

    }
    int Personaje::getPosicion_x(){
    	return posicion_x;
    }
    int Personaje::getPosicion_y(){
    	return posicion_y;
    }
    void Personaje::setPosicion_x(int x){
    	posicion_x = x;
    }
    void Personaje::setPosicion_y(int y){
    	posicion_y = y;
    }



