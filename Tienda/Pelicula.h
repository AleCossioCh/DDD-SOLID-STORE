#pragma once
#include "Articulo.h"
//Interface segregation principle -> new class
class Pelicula : public Articulo
{
private:
	string director;
	string genero;
public:
	void llenarInformacion();
	void mostrar();
	Pelicula(void);
	~Pelicula(void);
};

