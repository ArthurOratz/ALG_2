// Aula2011_Struct.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


//struct Carro
//{
//	char modelo[10];
//	char marca[10];
//	int ano[4];
//	char cor[10];
//	char placa[8];
//};
//struct Carro carrao;
//
//void LerDadosCarro()
//{
//	
//
//	printf("Digite o modelo: ");
//	fgets(carrao.modelo, 10, stdin);
//	//gets_s(carrao.modelo);
//	printf("Digite a marca: ");
//	fgets(carrao.marca, 10, stdin);
//
//	printf("Digite o ano: ");
//	scanf_s("%i", &carrao.ano);
//	gets_s(carrao.cor);
//	printf("Digite o cor: ");
//	fgets(carrao.cor, 10, stdin);
//	printf("Digite o placa: ");
//	fgets(carrao.placa, 8, stdin);
//}
//
//int main()
//{
//	
//	LerDadosCarro();
//
//}
struct Data {
	int dia; int mes; int ano;
};

struct Func
	{
		char nome[20];
		char cpf[12];
		struct Data aniversario;
		float salario;
	};

struct Func funcionario;

	void LerDadosFunc()
	{
		int i = 0;
		for (i = 0; i < 5; i++) {
			printf("Digite o nome: ");
			fgets(funcionario.nome, 20, stdin);
			//gets_s(carrao.modelo);
			printf("Digite a cpf: ");
			fgets(funcionario.cpf, 12, stdin);
			printf("Digite a Data niver: ");
			scanf_s("%i %i %i", funcionario.aniversario.dia, funcionario.aniversario.mes, funcionario.aniversario.ano);
			printf("Digite o salario: ");
			scanf_s("%f", funcionario.salario);
		}
	}

	int main() {
		LerDadosFunc();
	}