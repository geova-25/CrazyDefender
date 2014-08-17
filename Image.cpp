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

void Image::Dibujar(SDL_Surface* screen , int xx, int yy){
	rect.x = xx ;
	rect.y = yy ;
	SDL_BlitSurface(imagen,NULL,screen, &rect);

}
void Image::cargarImagen(const char*  nombre){
	imagen = SDL_LoadBMP(nombre);

}

