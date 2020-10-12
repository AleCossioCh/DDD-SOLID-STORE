#pragma once
#include "Articulo.h"
//Interface segregation principle -> new class
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

