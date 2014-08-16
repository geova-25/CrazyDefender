#include <iostream>
using std::cout;
using std::endl;
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>

#include <string>
using std::string;
#include "GUI.h"


GUI::GUI() {



	// TODO Auto-generated constructor stu
}
GUI::~GUI() {}

void GUI::initScreen(){
	fondo.init();
	fondo.dibujarVentana();
	fondo.cargarImagenFondo();
}

void GUI::Render(){
	fondo.rellenarFondoNegro();
	fondo.dibujarFondo();
	fondo.actualizarFondo();

}


