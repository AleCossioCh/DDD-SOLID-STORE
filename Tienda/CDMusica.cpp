#include "CDMusica.h"


CDMusica::CDMusica(void)
{
}

void CDMusica::llenarInformacion()
{
	Articulo::llenarInformacion();
	cout << "ingrese el nombre de la banda: ";
	cin >> artista;
}

void CDMusica::mostrar()
{
	cout << "CD de musica: " << endl;
	Articulo::mostrar();
	cout << "Artista: " << artista << endl;
}

CDMusica::~CDMusica(void)
{
}
