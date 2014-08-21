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
	if ((*x >= x1) & (*x <= x2) ){

		return true;

	}
	else{
		return false;
	}

}
 bool Obstaculos::detectarColisionEnY( int* y){
 	if ( (*y >= y1) & (*y <= y2)  ){

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
 int Obstaculos::getX1(){
	 return x1;
 }
 int Obstaculos::getX2(){
	 return x2;
 }
 int Obstaculos::getY1(){
	 return y1;
 }
 int Obstaculos::getY2(){return y2;}

 void Obstaculos::acelerar(int * velocidad_x ,int* velocidad_y ){
	x1 = x1 + *velocidad_x;
    x2 = x2 + *velocidad_x;
    y1 = y1 + *velocidad_y;
    y2 = y2 + *velocidad_y;

 }
