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

private:

	int resistencia;
	SDL_Surface* imagen = NULL;
	SDL_Rect* posicion_fondo = NULL;


};
