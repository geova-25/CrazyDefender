/*
 * Eventos.cpp
 *
 *  Created on: 10/08/2014
 *      Author: giovanni
 */

#include "SDL/SDL.h"
#include<iostream>
#include "Eventos.h"
using namespace std;
#include <pthread.h>


Eventos :: Eventos()
{

}


void Eventos::detectarEventos()
{
	while (true){

	while (SDL_PollEvent(&event)){

		cout<<"paso2"<<endl;
		if (event.type == SDL_KEYDOWN){
			if (event.key.keysym.sym == SDLK_UP){
					cout<<"flecha arriba"<<endl;
			}
		    if (event.key.keysym.sym == SDLK_DOWN){
				cout<<"flecha abajo"<<endl;
			}
		    if (event.key.keysym.sym == SDLK_RIGHT){
		    	cout<<"flecha derecha"<<endl;
			}
		    if (event.key.keysym.sym == SDLK_LEFT){
 				cout<<"flecha izquierda"<<endl;
		   }
		}

	}
}

}

void Eventos :: eventoMouse()
{
	if(event.type == SDL_QUIT)
	{
		exit(0);
	}
}
