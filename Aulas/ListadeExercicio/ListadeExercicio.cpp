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
	scanf_s("%f", &x);
	return x;
}


void ex1() {
	float x1,x2, d, y1, y2;
	printf("Digite a posicao de P(x1): ");
	x1 = lerNum();
	printf("Digite a posicao de P(y1:) ");
	y1 = lerNum();
	printf("Digite a posicao de P(x2): ");
	x2 = lerNum();
	printf("Digite a posicao de P1(y2): ");
	y2 = lerNum();

	d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	printf("A distancia entre P(x1, y1) e P(x2, y2) eh de :%.5f", d);
}

void ex2() {
	float A, B, C, d;
	printf("D=((A+B)*(A+B))+((B+C)*(B+C))/2\n\n");

	printf("Digite o valor de A:");
	A = lerNum();
	printf("Digite o valor de B:");
	B = lerNum();
	printf("Digite o valor de C:");
	C = lerNum();

	d = (pow((A + B), 2) + pow((B + C), 2)) / 2;
	printf("O resultado da espressao eh: %.5f", d);

}

void ex3() {
	//********************************************************
}

void ex4() {
	float nota1, nota2, nota3;
	printf("informe a primeira nota(peso 2): ");
	nota1 = lerNum();
	printf("informe a segunda nota(peso 3): ");
	nota2 = lerNum();
	printf("informe a terceira nota(peso 5): ");
	nota3 = lerNum();

	float media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
	printf("a Media eh: %.2f", media);
}

void ex5() {

	float custoFabrica, custoFinal;
	printf("PORCENTAGEM DISTRIBUIDOR = 28 POR CENTO \nIMPOSTOS = 45 POR CENTO\n\n");
	printf("escreva o valor de fabrica: ");
	custoFabrica = lerNum();

	custoFinal = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);
	printf("%2.f", custoFinal);
}


int main() {
	ex5();
}
