#pragma once
class Nave
{
private:
	int UbicacionDeInicioX;
	int UbicacionDeInicioY;
	int Tama�o;
	int Velocidad;

	//No tengo claro si estas funciones van en Potenciador o Nave
	void IncrementarVida();
	void IncrementarNivelDeDa�o();
	void IncrementarNivelDeMejora();
	void IncrementarVelocidad();
public:
	int Vida;
	int NivelDeDa�o;
	int NivelDeMejora;
	int UbicacionX;
	int UbicacionY;

	Nave();

	void Disparar();
	void Explotar();
	void Movimiento();
	void Reaparecer();
};

