// Aula2510_Repeticoes.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.


#include "pch.h"
#include <iostream>

//enquanto (while) - While (condicao)
//repita (do while) -  do { } while(condicao)
//para (for)

/*int main()
{
	//while (true) // laco infinito
	//{
	//	printf("a");
	//}
	int a = 0;
	while (a < 5)
	{
		printf("%i\t", a);
		a++; // a = a +1; // incremento
	}
	printf("\n================================\n");

	while (a <= 5)
	{
		printf("%i\t", a);
		a++; // a = a +1; // incremento
	}

	printf("\n============DO WHILE==============\n");

	do
	{
		printf("%i\t", a);
		a++; // a = a +1; // incremento
	} while (a <= 5);

	printf("\n\n\n");

	system("pause");
}*/

//*******EXERCICIO*********

/*
Ler 5 numeros inteiros (escrevendo apenas 1 scanf)
Apos a leitura informar so os valores estao ou nao em ordem crescente.
com apenas 4 variaveis?
*/

/*int main()
{
	int num[5];
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Digite um numero inteiro:\n");
		scanf_s("%i", &num[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%i\t", num[i]);
	}

	if (num[1] < num[2] && num[2] < num[3] && num[3] < num[4] && num[4] < num[5])	{
		printf("Esta em ordem crescente!");
	}
	else {
		printf("Nao esta em ordem crescente!");
	}

	system("pause");
}*/


int LerValor()
{
	int x;
	printf("informe o valor inteiro:");
	scanf_s("%i", &x);
	return x;
}

void DetectaValorEmOrdem()
{
	int i = 0;
	int anterior = 0, numero = 0;
	int crescente = 1; //1 eh crescente

	while (i <= 5)
	{
		numero = LerValor();

		if (i != 0)
		{
			if (anterior >= numero)
			{
				crescente = 0;
			}
		}
		anterior = numero;
		i++;
	}
	if (crescente == 1)
	{
		printf("Ordem cresente!");
	}
	else
	{
		printf("Nao estam em ordem crescente!");
	}
}

int main()
{
	DetectaValorEmOrdem();
}