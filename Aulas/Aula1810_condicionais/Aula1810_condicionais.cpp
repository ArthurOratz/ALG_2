// Aula1810_condicionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
//E = $$	OU = ||

int LerValor()
{
	int x;
	printf("informe o valor inteiro:");
	scanf_s("%i", &x);
	return x;
}

int MaiorValorInt(int a, int b, int c, int d)
{
	int maior = a;

	if (maior < b) {
		maior = b;
	}
	if (maior < c) {
		maior = c;
	}
	if (maior < d) {
		maior = d;
	}
	return maior;
}

/*int main ()
{
	int num1 = LerValor();
	int num2 = LerValor();
	int num3 = LerValor();
	int num4 = LerValor();

	if (num1 >= num2) {
		if (num1 >= num3) {
			if (num1 >= num4) {
				printf("%i eh o maior numero!", num1);
			}
		}
	}
	if (num2 >= num1) {
		if (num2 >= num3) {
			if (num2 >= num4) {
				printf("%i eh o maior numero!", num2);
			}
		}
	}
	if (num3 >= num2) {
		if (num3 >= num3) {
			if (num3 >= num1) {
				printf("%i eh o maior numero!", num3);
			}
		}
	}
	if (num4 >= num2) {
		if (num4 >= num3) {
			if (num4 >= num1) {
				printf("%i eh o maior numero!", num4);
			}
		}
	}

}*/
/*int main()
{
	int num1 = LerValor();
	int num2 = LerValor();
	int num3 = LerValor();
	int num4 = LerValor();

	if ((num1 >= num2) && (num1 >= num3) && (num1 >= num4))
	{
		printf("%i eh o maior numero!", num1);
	}
	if ((num2 >= num1) && (num2 >= num3) && (num2 >= num4))
	{
		printf("%i eh o maior numero!", num2);
	}

	if ((num3 >= num1) && (num3 >= num2) && (num3 >= num4))
	{
		printf("%i eh o maior numero!", num3);
	}

	if ((num4 >= num1) && (num4 >= num2) && (num4 >= num3))
	{
		printf("%i eh o maior numero!", num4);
	}

}*/
/*
int main()
{
	int num1 = LerValor();
	int num2 = LerValor();
	int num3 = LerValor();
	int num4 = LerValor();
	
	int x = MaiorValorInt(num1, num2, num3, num4);
	printf("%i eh o maior numero!", x);
}*/

int main()
{
	int num1 = LerValor();
	int num2 = LerValor();
	int num3 = LerValor();
	int num4 = LerValor();

	float media = (num1 + num2 + num3 + num4) / 4;
	printf("A media eh %.2f\n", media);

	if (num1 > media) {
		printf("%i eh acima da media!\n", num1);
	}
	if (num2 > media) {
		printf("%i eh acima da media!\n", num2);
	}
	if (num3 > media) {
		printf("%i eh acima da media!\n", num3);
	}
	if (num4 > media) {
		printf("%i eh acima da media!\n", num4);
	}
}

