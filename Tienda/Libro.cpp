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
	Articulo::mostrar();
	cout << "Libro: " << endl;
	cout << "Autor: " << autor << endl;
	cout << "Editorial: " << editorial << endl;
}

Libro::~Libro(void)
{
}
