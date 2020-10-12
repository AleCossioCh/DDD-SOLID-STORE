#pragma once
#include "Articulo.h"
//Interface segregation principle -> new class
class CDMusica : public virtual Articulo
{
private:
	string artista;
public:
	CDMusica(void);
	void llenarInformacion();
	void mostrar();
	~CDMusica(void);
};

