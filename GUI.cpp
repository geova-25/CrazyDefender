#include <iostream>
using std::cout;
using std::endl;
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>

#include <string>
using std::string;
#include "GUI.h"

GUI::GUI() {


	posicion_fondo.x = 0;
	posicion_fondo.y = 0;
	posicion_fondo.h = NULL;
	posicion_fondo.w = NULL;
	// TODO Auto-generated constructor stub

}

GUI::~GUI() {
	// TODO Auto-generated destructor stub
}
void GUI::dibujarFondo(){
	SDL_BlitSurface(imagen_fondo,NULL,screen, &posicion_fondo);
}
void GUI::actualizarFondo(){

	SDL_Flip(screen);

}
void GUI::cargarImagenFondo(){
	imagen_fondo = SDL_LoadBMP("fondo.bmp");
}
int GUI::dibujarVentana(){


	        if (SDL_Init(SDL_INIT_VIDEO) == -1)
	        {
	                printf("Error en SDL_Init: %s\n", SDL_GetError());
	                return 1;
	        }



	        screen = SDL_SetVideoMode(400,500, 16, SDL_ANYFORMAT);

	        if (screen == NULL)
	        {
	                printf("Error en SDL_SetVideoMode: %s\n", SDL_GetError());
	                return 1;
	        }

	        SDL_WM_SetCaption("Crazy Defender", NULL);


}
void GUI::rellenarFondoNegro(){
	SDL_FillRect(screen , 0 , SDL_MapRGB(screen->format,0,0,0));
}

void GUI::init(){
	SDL_Init(SDL_INIT_EVERYTHING);
}

