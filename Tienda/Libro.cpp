#include "Libro.h"

Libro::Libro(void)
{
}

void Libro::llenarInformacion()
{
	Articulo::llenarInformacion();
	cout << "Autor: ";
	cin >> autor;
	cout << "Editorial: ";
	cin >> editorial;
}

void Libro::mostrar()
{
	cout << "Libro: " << endl;
	Articulo::mostrar();
	cout << "Autor: " << autor << endl;
	cout << "Editorial: " << editorial << endl;
}

Libro::~Libro(void)
{
}
