/*
 /*
 * Lista_simple.h
 *
 *  Created on: 03/08/2014
 *      Author: giovanni
 */

#ifndef LISTA_SIMPLE_H_
#define LISTA_SIMPLE_H_
#include "Personaje.h"
/*
 * Lista_simple.cpp
 *
 *  Created on: 01/08/2014
 *      Author: giovanni
 */

#include<iostream>
#include "Nodo.h"

using namespace std;

class ListaSimple
{
	private:
		Nodos* primerNodo;
		Nodos* ultimoNodo;

	public:
		ListaSimple();
		void imprimir();
		void agregarAlFrente(Personaje* p );
		void agregarAlFinal(Personaje* p);
		void agregarAlFinal(int);
		void eliminarDelFrente();
		void eliminarDelFinal();
		void vaciar();
		bool estaVacia();
		Nodos* get_primerNodo();
};



#endif /* LISTA_SIMPLE_H_ */
