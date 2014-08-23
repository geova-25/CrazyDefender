/*
 * Parser.h
 *
 *  Created on: 19/08/2014
 *      Author: giovanni
 */

#ifndef PARSER_H_
#define PARSER_H_

#include "pugixml.hpp"
#include <iostream>
#include "Lista_simple.h"

using namespace pugi;
using namespace std;

class Parser
{
public:
	Parser();
	void cargarArchivoXML();
	void setParaSiguienteNivel();
	void cambiarNombre(const char*);
	const char* getImagenFondo();
	const char* getImagenNave();
	const char* getImagenNativos();
	const char* getImagenJefe();
	int getVidaNativos();
	int getUbicacionReliquias();
	ListaSimple getPos(const char*,const char*);
	ListaSimple getPosxObstaculos();
	ListaSimple getPosyObstaculos();
	ListaSimple getPosxReliquias();
	ListaSimple getPosyReliquias();


private:
	int nivel;
	const char* name;
	xml_node primerNodo;
	xml_document documentoXML;
	ListaSimple lista;
};



#endif /* PARSER_H_ */
