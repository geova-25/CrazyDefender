#ifndef GUI_H_
#define GUI_H_
#include <iostream>
using std::cout;
using std::endl;
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>

#include <string>
using std::string;
#include "Fondo.h"
#include "Image.h"
#include "Personaje.h"
#include "Nave.h"
 /*
 *  Created on: 09/08/2014
 *      Author: sebastian
 */



class GUI {

public:
	GUI();
	virtual ~GUI();
	void Render();
	void initScreen();
	void Update(Personaje* PtrPersonaje);


private:
	Fondo fondo;
	Image imgNave;
	Personaje* PtrPersonajeNave;
	Personaje naveGui;

};
#endif /* LOGICA_H_ */

