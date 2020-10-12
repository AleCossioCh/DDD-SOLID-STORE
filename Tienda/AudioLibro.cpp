#include "AudioLibro.h"

AudioLibro::AudioLibro(void)
{
}

void AudioLibro::llenarInformacion()
{
	string artista;
	Libro::llenarInformacion();
	cout << "Artista: ";
	cin >> artista;
	CDMusica::setArtista(artista);
	cout << "Idioma ingles (si/no): ";
	cin >> english;
	cout << "Idioma espa;ol (si/no): ";
	cin >> spanish;
}

void AudioLibro::mostrar()
{
	cout << "AUDIO-LIBRO: " << endl;
	Libro::mostrar();
	cout << "Artista: " << CDMusica::getArtista() << endl;
	cout << "Idioma espa;ol: " << spanish << endl;
	cout << "Idioma ingles: " << english << endl;
}

AudioLibro::~AudioLibro(void)
{
}
