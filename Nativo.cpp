/*
 * Nativo.cpp
 *
 *  Created on: 17/08/2014
 *      Author: giovanni
 */

#include<iostream>
#include"Nativo.h"

Nativo :: Nativo()
{
	pos_x = 100;
	vida = 0;
	pos_y = 30;
}

void Nativo :: moverseRandom()
{
	pos_x -= 2;
}


