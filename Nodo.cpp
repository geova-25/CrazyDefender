/*
 * Nodo.cpp
 *
 *  Created on: 03/08/2014
 *      Author: giovanni
 */
#include<iostream>
#include "Nodo.h"
#include "Personaje.h"
using namespace std;

Nodos :: Nodos()
{
	this->PtrPersonaje = NULL;
	this->siguiente = NULL;
}

Nodos :: Nodos(Personaje* p)
{
	this->PtrPersonaje = p;
	this->siguiente = NULL;
}

void Nodos :: set_PtrPersonaje(Personaje* p)
{
	this->PtrPersonaje = p;
	return;
}

void Nodos::set_siguiente(Nodos *punt)
{
	this->siguiente = punt;
	return;
}

Personaje* Nodos :: get_PtrPersonaje()
{
	return this->PtrPersonaje;
}

Nodos* Nodos :: get_siguiente()
{
	return this->siguiente;
}


