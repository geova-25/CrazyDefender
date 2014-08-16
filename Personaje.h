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

    void dibujar();

    void liberar();
    int* getPtrPosicion_x();
    int* getPtrPosicion_y();
    void setPtrPosicion_x(int* x);
    void setPtrPosicion_y(int* y);

protected:
    int posicion_inicial_x = 0;
    int posicion_inicial_y =0;
	int* PtrResistencia;
	int* PtrPosicion_x;
	int* PtrPosicion_y;


};
