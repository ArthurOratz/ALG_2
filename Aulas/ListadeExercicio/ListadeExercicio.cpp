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


void ex1() {/*1. Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no
plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal

cálculo é:*/
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

void ex2() {/*2. Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a
seguinte expressão:*/
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
	/*3.Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre - a
		expressa em anos, meses e dias.*/

}
//******************************

void ex4() {/*4. Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste
aluno. Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5,
respectivamente.*/
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

void ex5() {/*5. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,
escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao
consumidor.*/

	float custoFabrica, custoFinal;
	printf("PORCENTAGEM DISTRIBUIDOR = 28 POR CENTO \nIMPOSTOS = 45 POR CENTO\n\n");
	printf("escreva o valor de fabrica: ");
	custoFabrica = lerNum();

	custoFinal = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);
	printf("%2.f", custoFinal);
}

void ex6() {/*6. Dado um número inteiro positivo n, calcular a soma dos n primeiros números inteiros
positivos.*/

	int num, i, soma = 0;
	printf("digite o numero inteiro desejado: ");
	num = lerNum();
	for (i = num; i > 0; i--) {
		soma = soma + i;
	}
	printf("A soma de todos os numeiros inteiro ate %i eh de: %i", num, soma);
}

void ex7() {/*7. Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: "São
múltiplos" ou "Não são múltiplos".*/

	int a, b;
	printf("digite o valor de 'a':");
	a = lerNum();
	printf("digite o valor de 'b':");
	b = lerNum();
	int c = a % b;
	printf("%f", c);
}
//*********************************

void ex8() {/*8. Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das
seguintes categorias:

Infantil A 5 - 7 anos
Infantil B 8 -10 anos
Juvenil A 11 - 13 anos
Juvenil B 14 - 17 anos
Adulto maiores de 18 anos*/

	int idade;
	printf("informe a idade do nadador: ");
	idade = lerNum();

	if (idade >= 5 && idade <= 7) {
		printf("'INFANTIL A!'");
	}
	else if (idade >= 8 && idade <= 10) {
		printf("'INFANTIL B!'");
	}
	else if (idade >= 11 && idade <= 13) {
		printf("'JUVENIL A!'");
	}
	else if (idade >= 14 && idade < 17) {
		printf("'JUVENIL B!'");
	}
	else if (idade >= 18) {
		printf("'ADULTO!'");
	}
}

void ex9() {/*9. Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja
calcular a partir de 3 notas. Faça um algoritmo que leia as notas, a opção escolhida
pelo usuário e calcule a média.
1 -aritmética
2 -ponderada (3,3,4)
3 -harmônica*/
	int opcao;
	float media, num1, num2, num3;
	printf("digite as 3 notas: ");
	num1 = lerNum();
	num2 = lerNum();
	num3 = lerNum();

	printf("\n1-aritimetica\n2-ponderada(3,3,4)\n3-harmonica\n\nescolha o tipo da media: ");
	opcao = lerNum();
	switch (opcao)
	{
	case 1: 
		media = (num1 + num2 + num3) / 3;
		break;
	case 2:
		media = ((num1 * 3) + (num2 * 3) + (num3 * 4))/10;
		break;
	case 3:
		media = (3 / ((1 / num1) + (1 / num2) + (1 / num3)));
		break;
	}
	
	printf("media= %f", media);
}

void ex10() {/*10. Um vendedor necessita de um algoritmo que calcule o preço total devido por um
cliente. O algoritmo deve receber o código de um produto e a quantidade comprada
e calcular o preço total, usando a tabela abaixo:
Código do Produto - Preço unitário
1001 - 5,32
1324 - 6,45
6548 - 2,37
987 - 5,32
7623 - 6,45*/
	int cod = 0, qnt, fim = 1;
	float precoF=0;
	while (fim != 0) {
		printf("digite o cod do produto: ");
		cod = lerNum();
		printf("digite a quantidade: ");
		qnt = lerNum();

		switch (cod)
		{
		case 1001:
			precoF = precoF + (qnt*5.32);
			break;
		case 1324:
			precoF = precoF + (qnt*6.45);
			break;
		case 6548:
			precoF = precoF + (qnt*2.37);
			break;
		case 987:
			precoF = precoF + (qnt*5.32);
			break;
		case 7623:
			precoF = precoF + (qnt*6.45);
			break;
		default:
			printf("codigo invalido!");
			break;
		}
		printf("deseja incluir outro produto?\n\n1-Se Sim\n0-Se Nao\n");
		fim = lerNum();
	}
	printf("%.2f", precoF);
}

void ex11() {/*11. Faça um algoritmo para calcular a área de uma circunferência, considerando a
fórmula AREA = π * RAIO
2
. Utilize as variáveis AREA e RAIO, a constante pi =

3.14159 e os operadores aritméticos de multiplicação.*/

	double area, raio;
	printf("informe o raio: ");
	raio = lerNum();
	area = 3.14159*pow(raio, 2);
	printf("%.4f", area);
}

void ex12() {


}










int main() {
	ex11();
}
