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
	int c=89;
	while (true){
		c = evento.identificarTecla();
		SDL_Delay(300);
		cout<<c<<endl;
		if (evento.identificarTecla() == 1){
			nave.imprimirPosicion();
		}

	 }



	cout<<"e"<<endl;

}

