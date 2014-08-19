
#include <iostream>
using std::cout;
using std::endl;
#include "Personaje.h"
using std::cout;
using std::endl;
#include <SDL/SDL.h>

Personaje::Personaje(){
	PtrPosicion_x = &posicion_inicial_x;
	PtrPosicion_y = &posicion_inicial_y;
	PtrVelocidad_x = &velocidadinicial;


}
    void Personaje::morir(){

    }

	void Personaje::explotar(){
		cout<<"Explotar"<<endl;
	}

	void Personaje::moverse(){}

	void Personaje::liberarDeMemoria(){}

    void Personaje::setPtrResistencia(int* resis){
    	PtrResistencia = resis ;
    }

    int* Personaje::getPtrResistencia(){

    	return PtrResistencia;
    }
    void Personaje::imprimirPosicion(){
        	cout<<"posicion en X :"<<*PtrPosicion_x<< endl;
        	cout<<"posicion en Y :"<<*PtrPosicion_y<< endl;
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
    void Personaje::acelerar(int * velocidad_x ,int* velocidad_y ){
    	*PtrPosicion_x = *PtrPosicion_x + *velocidad_x ;
    	*PtrPosicion_y = *PtrPosicion_y + *velocidad_y ;

    }
    void Personaje::rodar(int * velocidad_y){
    	*velocidad_y = 0;

    }
    void Personaje::setVelocidadEnX(int*  PtrVelocidad){
    	PtrVelocidad_x = PtrVelocidad;
    }
    int* Personaje::getVelocidadEnX(){
    	return PtrVelocidad_x ;
    }





