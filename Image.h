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

class Image {
public:
	Image();
	virtual ~Image();
	void cargarImagen(const char*  nombre);
	void Dibujar(SDL_Surface* screen , int xx, int yy);


private:
	SDL_Surface* imagen  = NULL ;
	SDL_Rect rect;
};

#endif /* IMAGE_H_ */
