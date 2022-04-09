#pragma once
class Bomba
{
private:
	int Tamaño;
	int NivelDano;
	int UbicacionInicialX;
	int UbicacionInicialY;
	int Velocidad;


public:
	int UbicacionX;
	int UbicacionY;

	Bomba();

	void IniciarDisparo();
	void Impactar();
};

