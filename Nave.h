/*
 * Nave.h
 *
 *  Created on: 15/08/2014
 *      Author: sebastian
 */

#ifndef NAVE_H_
#define NAVE_H_
#include "Personaje.h"

class Nave : public Personaje
{
public:
	Nave();
	virtual ~Nave();
	void acelerar(int * velocidad_x ,int* velocidad_y);
};

#endif /* NAVE_H_ */
