#pragma once
#include <iostream>
#include <string>

class Conta
{
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	doble Saldo;
public:
	bool Sacar(double Valor);
	void Depositar(double Valor);
	void Transferir(Conta Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetConta();
	std::string GetTitular();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
};