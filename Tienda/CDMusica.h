#pragma once
#include "Articulo.h"

class CDMusica : public virtual Articulo
{
private:
	string artista;
public:
	CDMusica(void);
	void llenarInformacion();
	string getArtista();
	void setArtista(string newArtista);
	void mostrar();
	~CDMusica(void);
};

