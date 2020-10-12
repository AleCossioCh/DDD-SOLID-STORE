#pragma once
#include"CDMusica.h"
#include"Libro.h"
class AudioLibro: public Libro, public CDMusica
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

