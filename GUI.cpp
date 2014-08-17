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

	imgNave.cargarImagen("nave.bmp");
	imgNave.Dibujar(fondo.getPunteroScreen(),0,0);

    //lo ultimo que tiene que hacer
	fondo.actualizarFondo();
}
void GUI::Update(int personaje)
{
   PtrPersonaje = personaje;
   cout<<"personaje actualizado "<< PtrPersonaje <<endl;

    //Lets print on console just to test the working

}


