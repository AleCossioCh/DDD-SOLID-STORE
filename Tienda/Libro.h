#pragma once
#include "Articulo.h"
//Interface segregation principle -> new class
class Libro : public Articulo
{
private:
	string autor;
	string editorial;
public:
	Libro(void);
	void llenarInformacion();
	void mostrar();
	~Libro(void);
};

