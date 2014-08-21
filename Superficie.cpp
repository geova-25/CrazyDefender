/*
 * Superficie.cpp
 *
 *  Created on: 20/08/2014
 *      Author: sebastian
 */

#include "Superficie.h"

Superficie::Superficie() {
	// TODO Auto-generated constructor stub

}

Superficie::~Superficie() {
	// TODO Auto-generated destructor stub
}

void Superficie::acelerar(int* velocidad_x ){
	x1 = x1 - *velocidad_x;
    x2 = x2 - *velocidad_x;

 }
