/*
 * Eventos.h
 *
 *  Created on: 10/08/2014
 *      Author: giovanni
 */

#ifndef EVENTOS_H_
#define EVENTOS_H_

#include "SDL/SDL.h"
#include<iostream>
using namespace std;
#include <pthread.h>



class Eventos
{
	private:
		SDL_Event event;


	public:
		Eventos();
	    void detectarEventos( );

		void eventoMouse();

};




#endif /* EVENTOS_H_ */
