#pragma once
class Bala
{
private:
	int Velocidad;
	int DistanciaMaxima;
	int Tamano;
	int UbicacionIncioX;
	int UbicacionInicioY;
	int NivelDano;

	void IncrementarVelocidad();
	void IncrementarVelocidad(int _IncrementoVelocidad);
	
public:
	int UbicacionX;
	int UbicacionY;
	
	Bala();

	void IniciarDisparo();
	void Impactar();
};

