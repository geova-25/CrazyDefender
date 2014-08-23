/*
 * Parser.cpp
 *
 *  Created on: 19/08/2014
 *      Author: giovanni
 */

#include "pugixml.hpp"
#include <iostream>
#include "Parser.h"

using namespace pugi;
using namespace std;

Parser :: Parser()
{
	this->name = NULL;
	this->nivel = 1;
}

void Parser :: cargarArchivoXML()
{
	name = "Nivel1.xml";
	documentoXML.load_file(name);
	primerNodo = documentoXML.first_child();
}

void Parser :: setParaSiguienteNivel()
{
	this->nivel ++;
}

void Parser :: cambiarNombre(const char* nombre)
{
	this->name = nombre;
}

const char* Parser :: getImagenFondo()
{
	return primerNodo.child("Imagenes").attribute("Fondo").as_string();
}

const char* Parser :: getImagenNave()
{
	return primerNodo.child("Imagenes").attribute("Jugador").as_string();
}

const char* Parser :: getImagenNativos()
{
	return primerNodo.child("Imagenes").attribute("Nativos").as_string();
}

const char* Parser :: getImagenJefe()
{
	return primerNodo.child("Imagenes").attribute("Jefe").as_string();
}

int Parser :: getVidaNativos()
{
	return primerNodo.child("Nativos").attribute("Vida").as_int();
}

ListaSimple Parser :: getPos(const char* hijo,const char* atributo)
{
	if(!lista.estaVacia())
	{
		lista.vaciar();
	}
	for(xml_attribute attr = primerNodo.child(hijo).child(atributo).first_attribute()
	; attr ; attr = attr.next_attribute())
	{
		lista.agregarAlFinal(attr.as_int());
	}
	return lista;
}

ListaSimple Parser :: getPosxObstaculos()
{
	return  getPos("Obstaculos","Posiciones_X");
}

ListaSimple Parser :: getPosyObstaculos()
{
	return getPos("Obstaculos","Posiciones_Y");
}

ListaSimple Parser :: getPosxReliquias()
{
	return getPos("Reliquias","Posiciones_X");
}

ListaSimple Parser :: getPosyReliquias()
{
	return getPos("Reliquias","Posiciones_Y");
}


