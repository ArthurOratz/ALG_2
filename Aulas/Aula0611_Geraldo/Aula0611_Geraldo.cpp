// Aula0611_Geraldo.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/*int main()
{
	int i, vet[10], vet2[10];

	for (i = 0; i < 10; i++)
	{
		vet[i] = (i + 1) * 2;
	}
	printf("vet->");
	for (i = 0; i <10; i++)
	{
		printf("%3i ", vet[i]);
	}

	printf("\n\n");

	for (i = 0; i < 10; i++)
	{
		vet2[i] = i + 10;
	}
	printf("vet2->");
	for (i = 0; i < 10; i++)
	{
		printf("%3i ", vet2[i]);
	}

	printf("\n\nsoma->");
	for (i = 0; i < 10; i++)
	{
		printf("%3i ", vet[i] + vet2[i]);
	}
}*/

int main()
{
	int i, numInt[8];

	for (i = 0; i < 8; i++)
	{
		printf("digite um numero inteiro:");
		scanf_s("%i", &numInt[i]);
	}

	for (i = 0; i < 8; i++)
	{
		printf("%i ", numInt[i]);
	}
}