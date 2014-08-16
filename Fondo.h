/*
 * AreaDeJuego.h
 *
 *  Created on: 08/08/2014
 *      Author: sebastian
 */
#include <iostream>
#include <string>
using std::string;


#include <SDL/SDL.h>
using std::cout;
using std::endl;

class Fondo {

public:
	Fondo();
	virtual ~Fondo();

	int dibujarVentana();
    void rellenarFondoNegro();
	void dibujarFondo();
	void actualizarFondo();
	void cargarImagenFondo();
	void init();
	int getPosicionRectFondo_x();
	int getPosicionRect2Fondo_x();



private:

	void moverRectFondo_x(int num_de_pixeles);
	void moverRect2Fondo_x(int num_de_pixeles);

	SDL_Surface* imagen_fondo  = NULL ;
	SDL_Surface* screen = NULL;
	SDL_Rect rect_fondo;
	SDL_Rect rect_fondo2;


	int ANCHO_DE_PANTALLA;
	int LARGO_DE_PANTALLA ;
    int INICIAL_P1;
    int INICIAL_P2 ;
    int p1 = INICIAL_P1;
    int p2 = INICIAL_P2;

};


