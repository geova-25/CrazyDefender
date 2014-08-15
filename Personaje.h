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

    void setResistencia(int resistencia);

    int getResistencia();

    void imprimir();

    void dibujar();

    void liberar();
    int getPosicion_x();
    int getPosicion_y();
    void setPosicion_x(int x);
    void setPosicion_y(int y);

private:

	int resistencia;
	int posicion_x;
	int posicion_y;

};
