/*
 * Nodo.h
 *
 *  Created on: 03/08/2014
 *      Author: giovanni
 */

#ifndef NODO_H_
#define NODO_H_
#include "Personaje.h"

/*
 * Nodos.cpp
 *
 *  Created on: 01/08/2014
 *      Author: giovanni
 */
#include<iostream>
using namespace std;

class Nodos
{
	private:
		Personaje* PtrPersonaje;
		Nodos *siguiente;
	public:
		Nodos();
		Nodos(Personaje*);
		void set_PtrPersonaje(Personaje*);
		void set_siguiente(Nodos*);
		Personaje* get_PtrPersonaje();
		Nodos* get_siguiente();
};








#endif /* NODO_H_ */
