#pragma once
#include "Articulo.h"
//Interface segregation principle -> new class
class CDMusica : public Articulo
{
private:
	string Banda;
public:
	CDMusica(void);
	void llenarInformacion();
	void mostrar();
	~CDMusica(void);
};

