#include "AudioLibro.h"

AudioLibro::AudioLibro(void)
{
}

void AudioLibro::llenarInformacion()
{
	Libro::llenarInformacion();
	CDMusica::llenarInformacion();
	cout << "Idioma ingles (si/no): ";
	cin >> english;
	cout << "Idioma espa;ol (si/no): ";
	cin >> spanish;
}

void AudioLibro::mostrar()
{
	cout << "AUDIO-LIBRO: " << endl;
	Libro::mostrar();
	CDMusica::mostrar();
	cout << "Idioma espa;ol: " << spanish << endl;
	cout << "Idioma ingles: " << english << endl;
}

AudioLibro::~AudioLibro(void)
{
}
