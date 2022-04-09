#pragma once
class Potenciador
{
private:
	int IncrementoDeDano ;
	int IncrementoDeVida;
	int IncrementoDeVelocidad;
	int InicioDeUbicacionX;
	int InicioDeUbicacionY;

	//No tengo claro si estas funciones van en Potenciador o Nave
	void IncrementarVida();
	void IncrementarNivelDeDaño();
	void IncrementarNivelDeMejora();
	void IncrementarVelocidad();

public:
	int UbicacionX;
	int UbicacionY;
	Potenciador();

	void Desaparecer();
	void Generarse();
	void Moverse();


};

