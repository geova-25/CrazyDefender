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
int Eventos::identificarTecla(){
	while (SDL_PollEvent(&event)){

			if (event.type == SDL_KEYDOWN){
				if (event.key.keysym.sym == SDLK_UP){
					cout<<1<<endl;
					return 1;

				}
			    if (event.key.keysym.sym == SDLK_DOWN){
					cout<<2<<endl;
					return 2;
				}
			    if (event.key.keysym.sym == SDLK_RIGHT){
			    	cout<<3<<endl;
			    	return 3;
				}
			    if (event.key.keysym.sym == SDLK_LEFT){
	 				cout<<4<<endl;
	 				return 4;
			   }


			}

		}

	return 0;
}


int Eventos::detectarEventos()
{
	while (true){
	identificarTecla();
    }
	return 0;

}

void Eventos :: eventoMouse()
{
	if(event.type == SDL_QUIT)
	{
		exit(0);
	}
}
