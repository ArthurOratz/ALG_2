// Estudo.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <math.h>

float lerNum() {
	float x;
	scanf_s("%f", &x);
	return x;
}

int main()
{
	float ano, mes, dia, aux;
	int idadedias;

	printf("informe a sua idade em dias: ");
	idadedias = lerNum();
	mes = idadedias / 12;
	ano=
	printf("%.2f dias, %.0f meses e %.0f anos!", dia, mes, ano);
}
