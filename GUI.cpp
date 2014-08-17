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

	PtrPersonajeNave = &naveGui;

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



   // cout<<"personaje actualizado "<< *naveGui.getPtrPosicion_x() <<endl;

	imgNave.cargarImagen("nave.bmp");
	imgNave.Dibujar(fondo.getPunteroScreen(), PtrPersonajeNave);

    //lo ultimo que tiene que hacer
	fondo.actualizarFondo();
}
void GUI::Update(Personaje* personaje)
{
   PtrPersonajeNave = personaje;


    //Lets print on console just to test the working

}


