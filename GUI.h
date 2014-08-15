#include <iostream>
using std::cout;
using std::endl;
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>

#include <string>
using std::string;
 /*
 *  Created on: 09/08/2014
 *      Author: sebastian
 */

#ifndef GUI_H_
#define GUI_H_

class GUI {

public:
	GUI();
	virtual ~GUI();
	int dibujarVentana();
	void rellenarFondoNegro();
	void dibujarFondo();
	void actualizarFondo();
	void cargarImagenFondo();
	void init();


private:
	SDL_Surface* imagen_fondo  = NULL ;
    SDL_Surface* screen = NULL;
    SDL_Rect posicion_fondo;

};

#endif /* GUI_H_ */
