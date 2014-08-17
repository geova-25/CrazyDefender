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
	void Update(int PtrPersonaje);


private:
	Fondo fondo;
	Image imgNave;
	int PtrPersonaje;

};
#endif /* LOGICA_H_ */

