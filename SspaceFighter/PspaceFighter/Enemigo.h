#pragma once
class Enemigo
{
private:
	int UbicacionDeInicioX;
	int UbicacionDeInicioY;
	int Tama�o;
	int Velocidad;


public:
	int Resistencia;
	int UbicacionX;
	int UbicacionY;

	Enemigo();


	void Disparar();
	void Explotar();
	void Movimiento();
};

