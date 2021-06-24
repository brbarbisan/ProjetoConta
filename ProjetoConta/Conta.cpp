#include "Conta.h"
#include <iostream>
#include <string>


bool Conta::Sacar(double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
	}
	else
	{
		Saldo = Saldo - Valor;
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}

}

void Conta::Depositar(double Valor)
{
	Saldo += Valor;
	std::cout << "\nDeposito de R$" << Valor << " Efetuado com Sucesso\n";
}

void Conta::Transferir(Conta Destino, double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "\nSaldo Insuficiente!";
	}
	else
	{
		Destino.Depositar(Valor);
		Saldo -= Valor;
		std::cout << "\n***** Dados *****\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetConta() << "\n";
		std::cout << "Transferencia Realizada com Sucesso!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

std::string Conta::GetTitular()
{
	return Titular;
}

void Conta::SetBanco(std::string Banco)
{
	this->Banco = Banco;
}

void