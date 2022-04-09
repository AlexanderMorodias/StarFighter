#pragma once
class Asteroide
{
private:
	int Recistencia;
	int Tamano;
	int ubicacionDeInicio;

public:
	int Direccion;
	int velocidad;

	Asteroide();

	void Explotar();
	void Destruir();
};

