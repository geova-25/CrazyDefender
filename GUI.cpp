#include <iostream>
using std::cout;
using std::endl;
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>

#include <string>
using std::string;
#include "GUI.h"
#include "Nodo.h"
#include "Obstaculos.h"



GUI::GUI() {

	//PtrPersonajeNave = &naveGui;
	//PtrPersonajeAlien = &alienGui;
	Ptrlistasimple = & listasimple;


}
GUI::~GUI() {}

void GUI::initScreen(){
	fondo.init();
	fondo.dibujarVentana();
	fondo.cargarImagenFondo();

}
void GUI::dibujarElementos(){
	 Nodos* temporal = NULL;
	    temporal = Ptrlistasimple->get_primerNodo();
	    bool primer_ele = true;
	    	while(temporal != NULL)

	    	{
	    		if(temporal->get_elemento()->getId() == 1){

	    			imgNave.DibujarNave(fondo.getPunteroScreen(), Ptrlistasimple->get_primerNodo()->get_elemento());
	    			primer_ele = false;
	    		}
	    		else if(temporal->get_elemento()->getId() == 6){
	    			Obstaculos* ptr;
	    			ptr = (Obstaculos*)(temporal->get_elemento());
                    imgRect.DrawRect(ptr,fondo.getPunteroScreen());
	    		}
	    		else{
	    			imgAlien.Dibujar(fondo.getPunteroScreen(),temporal->get_elemento());
	    		}


	    		temporal = temporal->get_siguiente();
	    	}
}

void GUI::Render(){


	fondo.rellenarFondoNegro();
	fondo.dibujarFondo();

    imgAlien.cargarImagen("Alien.bmp");
    imgNave.cargarImagen("nave.bmp");

    dibujarElementos();

	fondo.mover(-(*Ptrlistasimple->get_primerNodo()->get_elemento()->getPtrPosicion_x() - 600));
	fondo.actualizarFondo();
	//cout<<fondo.getPosicionRectFondo_x()<<endl;

}
void GUI::Update(ListaSimple* personaje)
{
   Ptrlistasimple = personaje;


    //Lets print on console just to test the working

}


