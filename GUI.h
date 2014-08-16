
#include <iostream>
using std::cout;
using std::endl;
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>

#include <string>
using std::string;
#include "Fondo.h"
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


private:
	Fondo fondo;

};


