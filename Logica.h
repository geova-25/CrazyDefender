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
#include <pthread.h>
#include "Superficie.h"



class Logica :public  Subject
{
public:
	Logica();
	virtual ~Logica();
	void run();
	void Notificar(ListaSimple* PtrPersonaje);
	void colocarObstaculos();
	void colisionManagerDeNave();
	void setLimitesDeAreaDeJuego();
    void crearPersonajes();
    void crearSuperficie();
    void* hello(void);
    static void* hello_helper(void *context);
    void moverSuperficie();




private:
	Eventos evento;
	Nave nave;
	Personaje alien;
	Personaje* PtrNave;
	Personaje* PtrAlien;

	int numeroDePersonajes;
	ListaSimple listajugadores;
	ListaSimple* Ptrlistajugadores;
	int* PtrPosicionGeneral;
	int PosicionGeneral;
	int* PtrVelocidad_y;
	int* PtrVelocidad_x;

	Superficie surface1;

	ListaSimple* PtrListaSurfaces;



};

#endif /* LOGICA_H_ */
