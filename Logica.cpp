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


}
void Logica::crearSuperficie(){

	surface1.establecerDimensiones((*PtrPosicionGeneral + 1 ), 500, 1200 ,600);
			surface1.setId(6);
			Personaje* PtrSurface;
		    PtrSurface= &surface1;
			Ptrlistajugadores->agregarAlFinal(PtrSurface);
			PtrListaSurfaces->agregarAlFinal(PtrSurface);

	int i;

	for (i=1 ; i < 9; i++){
		Personaje* point;
		Superficie sup;
		sup.setId(6);
		sup.establecerDimensiones(2,3,4,5);
		Ptrlistajugadores->agregarAlFinal(PtrSurface);
		PtrListaSurfaces->agregarAlFinal(PtrSurface);


	}


}
void Logica::colisionManagerDeNave(){
	int medio = 600;
	int* ptrmedio;
	ptrmedio=&medio;
	 if((surface1.detectarColision(ptrmedio, nave.getPtrPosicion_y() ))){
			   nave.explotar();
	}

}
/** @param
 *
 */
void Logica::setLimitesDeAreaDeJuego(){
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
void Logica::moverSuperficie(){
    surface1.acelerar(PtrVelocidad_x);

}

void Logica::crearPersonajes(){
	    void* Buffer = calloc(2,sizeof(Personaje));
	    void* Buffer2 = calloc(1,sizeof(ListaSimple));
	    PtrNave = (Personaje*)Buffer;
	    PtrAlien = (Personaje*)(Buffer + sizeof(Personaje));
	    Ptrlistajugadores= (ListaSimple*)Buffer2;
	    *Ptrlistajugadores = listajugadores;
	    PtrNave = &nave;
	    PtrAlien = &alien;
	    PtrNave->setId(1);
	    Ptrlistajugadores->agregarAlFrente(PtrNave);
	    Ptrlistajugadores->agregarAlFinal(PtrAlien);

}

void* Logica::hello(void){
        std::cout << "Hello, world!" << std::endl;
        return 0;
    }

static void* hello_helper(void *context){
        return ((Logica*)context)->hello();

    }



void Logica::run(){
	numeroDePersonajes = 2;
	PosicionGeneral = -1*(*nave.getPtrPosicion_x()- 600);
	PtrPosicionGeneral = &PosicionGeneral;
    crearPersonajes();


	int tecla=0;

	int a = 0;
	int b = 0;
	PtrVelocidad_x = &a;
	PtrVelocidad_y = &b;
	crearSuperficie();
	colocarObstaculos();
    bool bandera=true;

	while (bandera){
		tecla = evento.identificarTecla();
		Notificar(Ptrlistajugadores);
		SDL_Delay(100);
		*PtrPosicionGeneral = *PtrPosicionGeneral - * PtrVelocidad_x;
		*PtrVelocidad_y = *PtrVelocidad_y +1;
		if (tecla == 1){    //Tecla arriba
			*PtrVelocidad_y = *PtrVelocidad_y - 10;

		}
		if (tecla == 2){    //Tecla abajo
			*PtrVelocidad_y = *PtrVelocidad_y + 2;
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
		setLimitesDeAreaDeJuego();
		colisionManagerDeNave();
        moverSuperficie();
		PtrNave->acelerar(PtrVelocidad_x,PtrVelocidad_y);
		PtrAlien->acelerar(PtrVelocidad_x,PtrVelocidad_y);
        PtrNave->setVelocidadEnX(PtrVelocidad_x);

	 }

}
void Logica::Notificar(ListaSimple* personaje)
{
  Notify(personaje);
}

