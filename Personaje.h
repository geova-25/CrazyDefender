

#ifndef PERSONAJE_H_
#define PERSONAJE_H_
#include <string> // la clase Personaje utiliza la clase string estándar de C++
using std::string;
#include <SDL/SDL.h>

class Personaje
{
public:
	Personaje();

	void morir();

	void explotar();

	void moverse();

	void liberarDeMemoria();

    void setPtrResistencia(int* resistencia);

    int* getPtrResistencia();

    void imprimirPosicion();



    void liberar();
    int* getPtrPosicion_x();
    int* getPtrPosicion_y();
    void setPtrPosicion_x(int* x);
    void setPtrPosicion_y(int* y);
    void acelerar(int * velocidad_x ,int* velocidad_y );
    void rodar(int* velocidad_y );
    void setVelocidadEnX(int* PtrVelocidad);
    int* getVelocidadEnX();
    int getId();
    void setId(int c);

protected:
    int posicion_inicial_x = 0;
    int posicion_inicial_y =0;
	int* PtrResistencia;
	int* PtrPosicion_x;
	int* PtrPosicion_y;
	int* PtrVelocidad_x;
	int velocidadinicial = 0 ;
	int id = 0;

};

#endif /* LOGICA_H_ */
