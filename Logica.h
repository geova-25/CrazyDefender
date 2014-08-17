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



class Logica :public Subject
{
public:
	Logica();
	virtual ~Logica();
	void run();
	void Notificar(int PtrPersonaje);

private:
	Eventos evento;
	Nave nave;

};

#endif /* LOGICA_H_ */
