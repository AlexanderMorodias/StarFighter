#pragma once
class Nave
{
private:
	int UbicacionDeInicioX;
	int UbicacionDeInicioY;
	int Tamaño;
	int Velocidad;

	//No tengo claro si estas funciones van en Potenciador o Nave
	void IncrementarVida();
	void IncrementarNivelDeDaño();
	void IncrementarNivelDeMejora();
	void IncrementarVelocidad();
public:
	int Vida;
	int NivelDeDaño;
	int NivelDeMejora;
	int UbicacionX;
	int UbicacionY;

	Nave();

	void Disparar();
	void Explotar();
	void Movimiento();
	void Reaparecer();
};

