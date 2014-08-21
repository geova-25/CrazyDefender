/*
 * Superficie.h
 *
 *  Created on: 20/08/2014
 *      Author: sebastian
 */

#ifndef SUPERFICIE_H_
#define SUPERFICIE_H_

#include "Obstaculos.h"


class Superficie : public Obstaculos {
public:
	Superficie();
	virtual ~Superficie();
	void acelerar(int * velocidad_x );
};

#endif /* SUPERFICIE_H_ */
