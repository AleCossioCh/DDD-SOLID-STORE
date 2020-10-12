#pragma once
#include"CDMusica.h"
#include"Libro.h"
class AudioLibro: public CDMusica, public Libro
{
private:
	string english;
	string spanish;
public:
	AudioLibro(void);
	void llenarInformacion();
	void mostrar();
	~AudioLibro(void);
};

