/*
 * AreaDeJuego.cpp
 *
 *  Created on: 08/08/2014
 *      Author: sebastian
 */
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
#include "Fondo.h"
#include <SDL/SDL.h>


Fondo::Fondo() {

	rect_fondo.x = 0;
	rect_fondo.y = 0;
	rect_fondo.h = NULL;
	rect_fondo.w = NULL;
	rect_fondo2.x = 0;
	rect_fondo2.y = 0;
	rect_fondo2.h = NULL;
	rect_fondo2.w = NULL;
 ANCHO_DE_PANTALLA=1200;
		LARGO_DE_PANTALLA = 600;
	    INICIAL_P1= 0;
	    INICIAL_P2 = - (ANCHO_DE_PANTALLA * 2);
	    p1 = INICIAL_P1;
	    p2 = INICIAL_P2;

}

Fondo::~Fondo() {
	// TODO Auto-generated destructor stub
}

void Fondo::dibujarFondo(){
	SDL_BlitSurface(imagen_fondo,NULL,screen, &rect_fondo2);
	SDL_BlitSurface(imagen_fondo,NULL,screen, &rect_fondo);


}
void Fondo::actualizarFondo(){

	SDL_Flip(screen);

}
void Fondo::cargarImagenFondo(){
	imagen_fondo = SDL_LoadBMP("fondo.bmp");
}
int Fondo::dibujarVentana(){


	        if (SDL_Init(SDL_INIT_VIDEO) == -1)
	        {
	                printf("Error en SDL_Init: %s\n", SDL_GetError());
	                return 1;
	        }



	        screen = SDL_SetVideoMode(ANCHO_DE_PANTALLA,LARGO_DE_PANTALLA, 16, SDL_ANYFORMAT);

	        if (screen == NULL)
	        {
	                printf("Error en SDL_SetVideoMode: %s\n", SDL_GetError());
	                return 1;
	        }

	        SDL_WM_SetCaption("Crazy Defender", NULL);


}
void Fondo::rellenarFondoNegro(){
	SDL_FillRect(screen , 0 , SDL_MapRGB(screen->format,0,0,0));
}

void Fondo::init(){
	SDL_Init(SDL_INIT_EVERYTHING);
}
 void Fondo::moverRectFondo_x(int num_de_pixeles){
     p1 = p1 + num_de_pixeles;
	 rect_fondo.x =  p1;

 }

 int Fondo::getPosicionRectFondo_x(){
 	 return rect_fondo.x;
 }
 void Fondo::moverRect2Fondo_x(int num_de_pixeles){
	 p2 = p2 + num_de_pixeles;
 	 rect_fondo2.x =  p2;

  }

  int Fondo::getPosicionRect2Fondo_x(){
  	 return rect_fondo2.x;
  }

  SDL_Surface* Fondo::getPunteroScreen(){
	  return screen;
  }
