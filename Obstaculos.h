/*
 * Obstaculos.h
 *
 *  Created on: 17/08/2014
 *      Author: sebastian
 */

#ifndef OBSTACULOS_H_
#define OBSTACULOS_H_
#include <SDL/SDL.h>
#include "Image.h"
#include <SDL/SDL.h>
#include <iostream>
using std::cout;
using std::endl;
#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>

class Obstaculos : public Personaje{
public:
	Obstaculos();

	virtual ~Obstaculos();
    bool detectarColisionEnX(int* x);
    bool detectarColisionEnY(int* y);
    void establecerDimensiones(int x1 , int y1 , int x2 ,int y2 );
    void RebotarEn_X(int * x);
    void RebotarEn_Y(int * y);
    bool detectarColision(int* x, int* y);
    int getX1();
    int getX2();
    int getY1();
    int getY2();
    void acelerar(int * velocidad_x ,int* velocidad_y );
protected:

	int x1;
	int x2;
	int y1;
	int y2;

};

#endif /* OBSTACULOS_H_ */
