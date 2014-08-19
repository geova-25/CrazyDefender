/*
 * Nave.h
 *
 *  Created on: 15/08/2014
 *      Author: sebastian
 */

#ifndef NAVE_H_
#define NAVE_H_
#include "Personaje.h"
#include <iostream>
using std::cout;
using std::endl;
#include <SDL/SDL.h>
#include <stdio.h>


class Nave : public Personaje
{
public:
	Nave();
	virtual ~Nave();
	void acelerar(int * velocidad_x ,int* velocidad_y);
	void rodar(int*);

private:


};

#endif /* NAVE_H_ */
