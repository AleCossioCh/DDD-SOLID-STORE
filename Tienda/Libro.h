#pragma once
#include "Articulo.h"

class Libro : public virtual Articulo
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

