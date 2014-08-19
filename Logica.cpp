/*
 * Logica.cpp
 *
 *  Created on: 15/08/2014
 *      Author: sebastian
 */

#include <SDL/SDL.h>
#include "Logica.h"

Logica::Logica() {
	// TODO Auto-generated constructor stub
}
Logica::~Logica() {
	// TODO Auto-generated destructor stub
}
void Logica::colocarObstaculos(){
   obstaculo1.establecerDimensiones(*PtrPosicionGeneral,500, 1200 ,600);

}
void Logica::colisionManagerDeNave(int*PtrVelocidad_x,int* PtrVelocidad_y ){
	 if((obstaculo1.detectarColision(nave.getPtrPosicion_x(), nave.getPtrPosicion_y() ))){
			   nave.explotar();
	}

}
/** @param
 *
 */
void Logica::setLimitesDeAreaDeJuego( int *PtrPosicionGeneral,int*PtrVelocidad_x,int* PtrVelocidad_y  ){
	if ( *PtrPosicionGeneral >= 1){
		*PtrVelocidad_x =  10 ;
		cout<<"se salio"<<endl;

	}
	if ( *PtrPosicionGeneral <= -3599){
		*PtrVelocidad_x =  -10 ;
		}
	if (*PtrNave->getPtrPosicion_y() < 0){
		PtrNave->explotar();
	}
}

void Logica::crearPersonajes(){
	    void* Buffer = calloc(2,sizeof(Personaje));
	    void* Buffer2 = calloc(1,sizeof(ListaSimple));
	    PtrNave = (Personaje*)Buffer;
	    PtrAlien = (Personaje*)(Buffer + sizeof(Personaje));
	    Ptrlistajugadores= (ListaSimple*)Buffer2;
	    *Ptrlistajugadores = listajugadores;
	    *PtrNave = nave;
	    *PtrAlien = alien;
	    Ptrlistajugadores->agregarAlFrente(PtrNave);
	    Ptrlistajugadores->agregarAlFinal(PtrAlien);
}

void Logica::run(){
	numeroDePersonajes = 2;
	PosicionGeneral = -1*(*nave.getPtrPosicion_x()- 600);
	PtrPosicionGeneral = &PosicionGeneral;
    crearPersonajes();
	int tecla=0;
	int* PtrVelocidad_x;
	int* PtrVelocidad_y;
	int a = 0;
	int b = 0;
	PtrVelocidad_x = &a;
	PtrVelocidad_y = &b;
	colocarObstaculos();
    bool bandera=true;

	while (bandera){
		tecla = evento.identificarTecla();
		Notificar(Ptrlistajugadores);
		SDL_Delay(100);
		*PtrPosicionGeneral = *PtrPosicionGeneral - * PtrVelocidad_x;

		if (tecla == 1){    //Tecla arriba
			*PtrVelocidad_y = *PtrVelocidad_y - 1;

		}
		if (tecla == 2){    //Tecla abajo
			*PtrVelocidad_y = *PtrVelocidad_y + 1;
		}
		if (tecla == 3){    //Tecla derecha
			*PtrVelocidad_x = *PtrVelocidad_x + 1;
		}
		if (tecla == 4){    //Tecla izquierda
			*PtrVelocidad_x = *PtrVelocidad_x - 1;
		}
		if (tecla == 10){
			//free(Buffer);
			bandera=false;
		}
		PtrNave->imprimirPosicion();
		setLimitesDeAreaDeJuego( PtrPosicionGeneral,PtrVelocidad_x,PtrVelocidad_y );
		colisionManagerDeNave(PtrVelocidad_x,PtrVelocidad_y);
		PtrNave->acelerar(PtrVelocidad_x,PtrVelocidad_y);
        PtrNave->setVelocidadEnX(PtrVelocidad_x);

	 }

}
void Logica::Notificar(ListaSimple* personaje)
{
  Notify(personaje);
}

