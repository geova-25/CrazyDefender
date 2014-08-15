
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

    void Personaje::setPtrResistencia(int* resis){
    	PtrResistencia = resis ;
    }

    int* Personaje::getPtrResistencia(){

    	return PtrResistencia;
    }
    void Personaje::imprimir(){
        	cout<<"se creo nuevo personaje"<< endl;
    }

    void Personaje::dibujar(){

    }

    void Personaje::liberar(){

    }
    int* Personaje::getPtrPosicion_x(){
    	return PtrPosicion_x;
    }
    int* Personaje::getPtrPosicion_y(){
    	return PtrPosicion_y;
    }
    void Personaje::setPtrPosicion_x(int* x){
    	PtrPosicion_x = x;
    }
    void Personaje::setPtrPosicion_y(int* y){
    	PtrPosicion_y = y;
    }



