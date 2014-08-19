/*
 * Nativo.h
 *
 *  Created on: 17/08/2014
 *      Author: giovanni
 */

#ifndef NATIVO_H_
#define NATIVO_H_

#include "Personaje.h"

class Nativo : Personaje
{
	private:
		int vida;
		int pos_x;
		int pos_y;
	public:
		Nativo();
		void moverseRandom();
};




#endif /* NATIVO_H_ */
