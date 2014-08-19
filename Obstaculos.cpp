/*
 * Obstaculos.cpp
 *
 *  Created on: 17/08/2014
 *      Author: sebastian
 */

#include "Obstaculos.h"

Obstaculos::Obstaculos(){

}


Obstaculos::~Obstaculos() {
	// TODO Auto-generated destructor stub
	}
 bool Obstaculos::detectarColisionEnX(int* x){
	if (*x >= x1 & *x <= x2 ){

		return true;

	}
	else{
		return false;
	}

}
 bool Obstaculos::detectarColisionEnY( int* y){
 	if ( *y >= y1 & *y <= y2  ){

 		return true;

 	}
 	else{
 		return false;
 	}

 }
 void Obstaculos::establecerDimensiones(int xx1 , int yy1 , int xx2 ,int yy2 ) {
          x1 = xx1;
          x2 = xx2;
          y1= yy1;
          y2 = yy2;
 }
 void Obstaculos::RebotarEn_X(int* velocidad_x ){
	 *velocidad_x = - *velocidad_x;
	// *velocidad_y =  *velocidad_y;
 }
 void Obstaculos::RebotarEn_Y(int* velocidad_y ){
 	 *velocidad_y = - *velocidad_y;
 	// *velocidad_y =  *velocidad_y;
  }

 bool Obstaculos::detectarColision(int* x, int* y){
  	if ( (*y >= y1) & (*y <= y2) & (*x >= x1) & (*x <= x2 ) ){
  		cout<<"colision"<<endl;

  		return true;

  	}
  	else{
  		return false;
  	}
 }
