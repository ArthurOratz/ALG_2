// CALCULADORA.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "pch.h"
#include <iostream>

int soma(int x, int y)
{
	int a = x + y;
	return a;

}
int subtracao(int x, int y)
{
	int a = x - y;
	return a;
}
int multiplicacao(int x, int y)
{
	int a = x * y;
	return a;
}

float divisao(float x, float y)
{
	float a = x / y;
	return a;
}

int LerNumInteiro()
{
	int a;
	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &a);
	return a;
}

int main()

{
	int PrimeiroValor = LerNumInteiro();
	int SegundoValor = LerNumInteiro();

	int so = soma(PrimeiroValor, SegundoValor);
	int su = subtracao(PrimeiroValor, SegundoValor);
	int m = multiplicacao(PrimeiroValor, SegundoValor);
	float d = divisao((float)PrimeiroValor, (float)SegundoValor);

	printf("O Valor da soma eh: %i\n", so);
	printf("O Valor da subtracao eh: %i\n", su);
	printf("O Valor da multiplicacao eh: %i\n", m);
	printf("O Valor da divisao eh: %f\n", d);
}