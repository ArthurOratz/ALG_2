// Aula2011_Exercicio.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int lerNum()
{
	printf("digte um numero inteiro:");
	int Num;
	scanf_s("%i", &Num);
	return Num;
}

//int somar(int num)
//{
//	if (num==1) {
//		return 1;
//	}
//	else {
//		return num + somar(num-1);
//	}
//}
//
//
//int main()
//{
//	int num = lerNum();
//	printf("a soma de todos os numeros ate o numero digitado e: %i", somar(num));
//}

int fat(int num) {
	if (num == 0) {
		return 1;
	}
	return num * fat(num - 1);
}

int main()
{
	int num = lerNum();
	printf("fatorial do numero digitado e: %i", fat(num));
}
