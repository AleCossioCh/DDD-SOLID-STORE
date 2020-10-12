#include "CDMusica.h"


CDMusica::CDMusica(void)
{
}

void CDMusica::llenarInformacion()
{
	Articulo::llenarInformacion();
	cout << "ingrese el nombre de la banda: ";
	cin >> Banda;
}

void CDMusica::mostrar()
{
	cout << "CD de musica: " << endl;
	Articulo::mostrar();
	cout << "Banda: " << Banda << endl;
}

CDMusica::~CDMusica(void)
{
}
