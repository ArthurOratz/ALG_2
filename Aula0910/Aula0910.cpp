// Aula0910.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h" //biblioteca
#include <iostream>

//variaveis globais
int a; //inteiro
float b; //real(pouca precisao)
double c; //real(grande precisao)

int main()
{
	//variaveis locais
	char d; //caractere
	bool e; //booleano(true/false)

	printf("Hello world!\n");
	printf("teste\t\tTeste\n\n");

	printf("A\tB\tC\tD\n");
	printf("A\tB\tC\tD\n");
	printf("A\tB\tC\tD\n\n");

	printf("Mostrar o valor %i \n", 5);
	printf("A soma de %i e %i eh: %i \n", 85, 30, 85 + 30);
	
	printf("Mostrando %f, que he um numero real\n", 4.3);

	printf("Olha soh este numero: %i \n\n\n"); //erro

	int f;
	f = 8;
	a = f * 2;

	printf("Resultado da multiplicacao de %i por 2 eh: %i\n", f, a);

	scanf_s("%i", &a);
	printf("\n\nValor digitado foi: %i\n\n", a);

	printf("Digite um valor real: ");
	scanf_s("%f", &b);
	printf("\n Voce digitou: %.2f\n", b);


	system("pause");
	return 0;
}
