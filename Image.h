/*
 * Image.h
 *
 *  Created on: 16/08/2014
 *      Author: sebastian
 */

#ifndef IMAGE_H_
#define IMAGE_H_

#include <SDL/SDL.h>
#include <string>
using std::string;
#include "Personaje.h"

class Image {
public:
	Image();
	virtual ~Image();
	void cargarImagen(const char*  nombre);
	void Dibujar(SDL_Surface* screen , Personaje* personaje);
	void DibujarNave(SDL_Surface* screen , Personaje* personaje);



protected:
	SDL_Surface* imagen  = NULL ;
	SDL_Rect rect;
};

#endif /* IMAGE_H_ */
