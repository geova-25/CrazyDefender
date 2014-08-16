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

const int ANCHO_DE_PANTALLA=1200;
const int LARGO_DE_PANTALLA = 600;

const int INICIAL_P1= 0;
const int INICIAL_P2 = - (ANCHO_DE_PANTALLA * 2);




class Fondo
{

public:
	Fondo();
	virtual ~Fondo();

	int dibujarVentana();
    void rellenarFondoNegro();
	void dibujarFondo();
	void actualizarFondo();
	void cargarImagenFondo();
	void init();
	void mover(int velocidad);
	int getPosicionRectFondo_x();

	int getPosicionRect2Fondo_x();



private:

	void moverRectFondo_x(int num_de_pixeles);
	void moverRect2Fondo_x(int num_de_pixeles);

	SDL_Surface* imagen_fondo  = NULL ;
	SDL_Surface* screen = NULL;
	SDL_Rect rect_fondo;
	SDL_Rect rect_fondo2;
	int p1 = INICIAL_P1;
	int p2 = INICIAL_P2;

};


