
#include <iostream>
using std::cout;
using std::endl;
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using std::string;
#include "Personaje.h"
#include "Fondo.h"
#include "GUI.h"
#include "SDL/SDL_thread.h"


Fondo fondo1;


using namespace std;
SDL_Thread *hilo = NULL;
SDL_Thread *hilo2 = NULL;

void initRender(){
	fondo1.init();
	fondo1.dibujarVentana();
	fondo1.cargarImagenFondo();

}

int render(){

	fondo1.rellenarFondoNegro();
	fondo1.dibujarFondo();
	fondo1.actualizarFondo();
        cout<<"render"<<endl;


    return 0;
}
int update(void* g){
	int velocidad = 100;

	while(true){
		fondo1.mover(velocidad);




		cout<<fondo1.getPosicionRectFondo_x()<<endl;
		cout<<fondo1.getPosicionRect2Fondo_x()<<endl;
		SDL_Delay(50);


	}

	return 0;

}




int main(){
	initRender();


	//hilo = SDL_CreateThread(update, NULL);
	//hilo2 = SDL_CreateThread(render, NULL);
//Gameloop



	while(true){

           // update();
            //render();
			//SDL_Delay(100);



		}
	return 0;
}

