/*
 * Image.cpp
 *
 *  Created on: 16/08/2014
 *      Author: sebastian
 */

#include "Image.h"
#include <string>
using std::string;


Image::Image() {


	// TODO Auto-generated constructor stub

}

Image::~Image() {
	// TODO Auto-generated destructor stub
}

void Image::Dibujar(SDL_Surface* screen , Personaje* personaje){
	int* xx = personaje->getPtrPosicion_x();
	int* yy = personaje->getPtrPosicion_y();
	rect.x = *xx;
	rect.y = *yy ;
	SDL_BlitSurface(imagen,NULL,screen, &rect);

}
void Image::cargarImagen(const char*  nombre){
	imagen = SDL_LoadBMP(nombre);

}
void Image::DibujarNave(SDL_Surface* screen , Personaje* personaje){
	int* xx = personaje->getPtrPosicion_x();
	int* yy = personaje->getPtrPosicion_y();
	rect.x = 600;
	rect.y = *yy ;
	SDL_BlitSurface(imagen,NULL,screen, &rect);

}

