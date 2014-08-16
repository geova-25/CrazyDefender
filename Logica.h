/*
 * Logica.h

 *
 *  Created on: 15/08/2014
 *      Author: sebastian
 */
#include <iostream>
using std::cout;
using std::endl;
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using std::string;

#include "Eventos.h"
#include "Nave.h"


#ifndef LOGICA_H_
#define LOGICA_H_

class Logica {
public:
	Logica();
	virtual ~Logica();
	void run();

private:
	Eventos evento;
	Nave nave;

};

#endif /* LOGICA_H_ */
