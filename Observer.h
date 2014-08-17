#pragma once

#include "Personaje.h"
class Observer
{



public:
    virtual void Update(int PterPersonaje) = 0;
};
Observer::Observer(){

}
Observer::~Observer() {
	// TODO Auto-generated destructor stub
}
