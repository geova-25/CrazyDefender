
#include <iostream>
using std::cout;
using std::endl;
#include <stdio.h>
#include <stdlib.h>
#include <string>
using std::string;
#include "GUI.h"
#include "SDL/SDL_thread.h"
#include <pthread.h>
#include "Logica.h"


/*
Fondo fondo1;

void initRender(){
	fondo1.init();
	fondo1.dibujarVentana();
	fondo1.cargarImagenFondo();
}
Eventos evento;
pthread_t hilo1;
pthread_t hilo2;
pthread_t hilo3;
using namespace std;
void *correrHiloEventos(void* unused){
	evento.detectarEventos();
	SDL_Delay(100);
	}
void* render(void* unused){
while(true){
	fondo1.rellenarFondoNegro();
	fondo1.dibujarFondo();
	fondo1.actualizarFondo();
        cout<<"render"<<endl;
        SDL_Delay(100);
}
}
void* update(void* g){
	int velocidad = 1;

	while(true){
		fondo1.mover(velocidad);
		cout<<fondo1.getPosicionRectFondo_x()<<endl;
		cout<<fondo1.getPosicionRect2Fondo_x()<<endl;
		SDL_Delay(100);
	}
}
*/
GUI gui;
Logica logica;

pthread_t hilo1;

void *correrHiloRender(void* unused){
	while (true){
		gui.Render();
	}


}

int main(){

    logica.Attach(&gui);
    gui.initScreen();

    pthread_create(&hilo1,NULL,correrHiloRender,NULL);



    logica.run();








    /*initRender();
	void* g ;
	pthread_create(&hilo1,NULL,correrHiloEventos,NULL);
	pthread_create(&hilo2,NULL,update,NULL);
	pthread_create(&hilo3,NULL,render,NULL);

	pthread_join(hilo1,NULL);
	pthread_join(hilo2,NULL);
	pthread_join(hilo3,NULL);    */

}

