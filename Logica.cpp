/*
 * Logica.cpp
 *
 *  Created on: 15/08/2014
 *      Author: sebastian
 */

#include <SDL/SDL.h>
#include "Logica.h"

Logica::Logica() {
	// TODO Auto-generated constructor stub
}
Logica::~Logica() {
	// TODO Auto-generated destructor stub
}
void Logica::run(){

	int tecla=89;
	int* PtrVelocidad_x;
	int* PtrVelocidad_y;
	int a = 0;
	int b = 0;
	PtrVelocidad_x = &a;
	PtrVelocidad_y = &b;
	while (true){
		tecla = evento.identificarTecla();
		SDL_Delay(300);                       //DElay/////////////////////
		cout<<tecla<<endl;
		if (tecla == 1){    //Tecla arriba
			*PtrVelocidad_y = *PtrVelocidad_y - 1;
		}
		if (tecla == 2){    //Tecla abajo
			*PtrVelocidad_y = *PtrVelocidad_y + 1;
		}
		if (tecla == 3){    //Tecla derecha
			*PtrVelocidad_x = *PtrVelocidad_x + 1;
		}
		if (tecla == 4){    //Tecla izquierda
			*PtrVelocidad_x = *PtrVelocidad_x - 1;
		}
		nave.acelerar(PtrVelocidad_x,PtrVelocidad_y);
		nave.imprimirPosicion();

	 }



	cout<<"e"<<endl;

}

