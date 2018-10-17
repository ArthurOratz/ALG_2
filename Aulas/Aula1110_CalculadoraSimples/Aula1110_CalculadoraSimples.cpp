//CALCULADORA  SIMPLES//

#include "pch.h"
#include <iostream>

float LerNum()
{
	printf("\nDigite um numero: ");
	float num;
	scanf_s("%f", &num);
	return num;
}

float Soma(float x, float y)
{	/*float s;
	s = x + y;
	return s;*/
	return x + y;
}

float Subtracao(float x, float y)
{	/*float sub;
	sub = x - y;
	return sub;*/
	return x - y;
}

float Multiplicacao(float x, float y)
{	/*float m;
	m = x * y;
	return m;*/
	return x * y;
}

float Divisao(float x, float y)
{
	float d;
	if (y == 0)
	{
		printf("\nImpossivel dividir por zero!!!\n");
		
	}
	else
	{
		d = x / y;
		return d;
	}
}



int main()
{
	printf("\n**ESCOLHA A OPERACAO**\n\n1=Soma\n2=Subtracao\n3=Multiplicacao\n4=Divisao\n\n");
	float operacao;

	scanf_s("%f", &operacao);

	float a = LerNum();
	float b = LerNum();

	/*float ResultSoma = Soma(a, b);
	printf("\n%.2f\n", ResultSoma);

	system("pause");*/

	if (operacao == 1)
	{
		float ResultSoma = Soma(a, b);

		printf("\nO resultado da soma eh: %.2f\n\n", ResultSoma);
	}

	else if (operacao == 2)
	{
		float ResultSub = Subtracao(a, b);

		printf("\nO resultado da subtracao eh: %.2f\n\n", ResultSub);
	}
	
	else if (operacao == 3)
	{
		float ResultMulti = Multiplicacao(a, b);

		printf("\nO resultado da multiplicacao eh: %.2f\n\n", ResultMulti);
	}
	
	else if (operacao == 4)
	{
		float ResultDivisao = Divisao(a, b);

		printf("\nO resultado da Divisao eh: %.2f\n\n", ResultDivisao);
	}

	else
	{
		printf("\nCalculo invalido!\n");
	}
	system("pause");

}