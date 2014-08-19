/*
 * Logica.h

 *
 *  Created on: 15/08/2014
 *      Author: sebastian
 */



#ifndef LOGICA_H_
#define LOGICA_H_
#include <iostream>
using std::cout;
using std::endl;
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using std::string;

#include "Eventos.h"
#include "Nave.h"
#include "Subject.h"
#include "Personaje.h"
#include "Obstaculos.h"
#include "Listasimple.h"


class Logica :public Subject
{
public:
	Logica();
	virtual ~Logica();
	void run();
	void Notificar(ListaSimple* PtrPersonaje);
	void colocarObstaculos();
	void colisionManagerDeNave(int*,int*);
	void setLimitesDeAreaDeJuego(int *PtrPosicionGeneral,int*PtrVelocidad_x,int* PtrVelocidad_y  );
    void crearPersonajes();


private:
	Eventos evento;
	Nave nave;
	Personaje alien;
	Personaje* PtrNave;
	Personaje* PtrAlien;
	Obstaculos obstaculo1;
	int numeroDePersonajes;
	ListaSimple listajugadores;
	ListaSimple* Ptrlistajugadores;
	int* PtrPosicionGeneral;
	int PosicionGeneral;

};

#endif /* LOGICA_H_ */
