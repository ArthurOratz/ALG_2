// Aula2310_Switch.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int LerNum()
{
	printf("digite um num inteiro:");
	int Num;
	scanf_s("%i", &Num);
	return Num;
}
int RestoPor5(int num)
{
	int resto;
	resto = num % 5;
	return resto;
}

int main()
{
	int Num = LerNum();
	int resto = RestoPor5(Num);
	switch (resto)
	{
	case 0:
		printf("O numero %i eh divisivel por 5\n", Num);
	case 1:
		printf("O numero %i nao eh divisivel por 5, e o resto eh %i\n", Num, resto);
		break;
	case 2:
		printf("O numero %i nao eh divisivel por 5, e o resto eh %i\n", Num, resto);
		break;
	case 3:
		printf("O numero %i nao eh divisivel por 5, e o resto eh %i\n", Num, resto);
		break;
	case 4:
		printf("O numero %i nao eh divisivel por 5, e o resto eh %i\n", Num, resto);
		break;
	default:
		printf("Valor invalido!\n");
		break;	
	}

}
