#include "pch.h"
#include <iostream>

float Soma(float x, float y)
{
	/*float s;
	s = x + y;
	return s;*/

	return x + y;
}

float Subtracao(float x, float y)
{
	float sub;
	sub = x - y;
	return sub;

}

float Divisao(float x, float y)
{
	float d;
	d = x / y;
	return d;
}

float Multiplicacao(float x, float y)
{
	float m;
	m = x * y;
	return m;
}

float LerNum()
{
	printf("\nDigite um numero: ");
	float num;
	scanf_s("%f", &num);
	return num;
}

int main()
{
	float operacao;
	printf("\n**ESCOLHA A OPERACAO**\n\n1=Soma\n2=Subtracao\n3=Divisao\n4=Multiplicacao\n\n");

	scanf_s("%f", &operacao);

	float a = LerNum();
	float b = LerNum();
	/*float ResultSoma = Soma(a, b);
	printf("\n%.2f\n", ResultSoma);

	system("pause");*/

	if (operacao == 1)
	{
		float ResultSoma = Soma(a, b);

		printf("\nO resultado da soma eh: %.2f\n", ResultSoma);
		if(operacao==2)
	{
		float ResultSub = Subtracao(a, b);

		printf("\nO resultado da subtracao eh: %.2f\n", ResultSub);
	}
	}
	system("pause");

}