/*
 * Nave.cpp
 *
 *  Created on: 15/08/2014
 *      Author: sebastian
 */

#include "Nave.h"


Nave::Nave() {
	 posicion_inicial_x = 600;
	 posicion_inicial_y =300;

}

Nave::~Nave() {
	// TODO Auto-generated destructor stub
}

void Nave::acelerar(int * velocidad_x ,int* velocidad_y ){
	*PtrPosicion_x = *PtrPosicion_x + *velocidad_x ;
	*PtrPosicion_y = *PtrPosicion_y + *velocidad_y ;

}
void Nave::rodar(int * velocidad_y){
	 *velocidad_y = 0;
	 cout<<"rodando"<<endl;

}

