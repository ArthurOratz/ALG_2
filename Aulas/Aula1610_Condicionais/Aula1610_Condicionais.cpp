// Aula1610_Condicionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int main()
{
	/*
		**operador logico SEMPRE entre 2 operandos
		**resultado da operacao pode ser apenas TRUE ou FALSE
		***CONECTORES LOGICOS
		"E" - &&
		"OU" - ||
	*/


	//SE
	if (true)
	{
		//esse codigo SERA executado
	}

	if (false)
	{
		//esse codigo NAO SERA executado
	}

	int a = 0;

	if (a == 0)
	{
		printf("A igual a zero\n");
	}

	if (a != 0)
	{
		printf("A diferente de zero\n");
	}

	int b = 5;
	if (b < a)

	{
		printf("B menor que a");
	}

	if (a <= b) //A pode ser menor, igual ou diferente
	{
		printf("A menor ou igual a B");
	}

	if (a = b)
	{
		printf("São iguais");
	}
	else
	{
		printf("são diferentes");

	}
}