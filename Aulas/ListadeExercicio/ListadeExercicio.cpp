// ListadeExercicio.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <math.h>

//RAIZ
//int main()
//{
//	double param, result;
//	param = 16;
//	result = sqrt(param);
//	printf("sqrt(%.2f) = %.2f.\n", param, result);
//	return 0;
//}
//POTENCIA
//int main() {
//	double g;
//	g = pow(6, 3);
//	printf("potencia: %f", g);
//}

float lerNum() {
	float x;
	printf("escreva o numero: ");
	scanf_s("%f", &x);
	return x;
}


void ex1() {
	float x1,x2, d, y1, y2;
	printf("Digite a posicao de P1: \n");
	x1 = lerNum();
	y1 = lerNum();
	printf("Digite a posicao de P2: \n");
	x2 = lerNum();
	y2 = lerNum();

	d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	printf("A distancia entre P1 e P2 eh de :%.5f", d);
}

void ex2() {
	float num1, num2, num3;
	num1 = lerNum();
	num2 = lerNum();
	num3 = lerNum();

}

int main() {
	ex1();

}
