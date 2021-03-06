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

void ex3() {/*3.Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre - a
		expressa em anos, meses e dias.*/

	float ano, mes, dia,aux;
	int idadedias;

	printf("informe a sua idade em dias: ");
	idadedias = lerNum();
	ano = idadedias / 360;
	idadedias = (idadedias / 360)-(ano-(idadedias%360));
	mes = idadedias / 30;
	dia= (idadedias / 30) - (mes - (idadedias % 30));
	printf("voce viveu %f dias, %f meses e %f anos!", dia, mes, ano);

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
	printf("digite o valor de A(dividendo):");
	a = lerNum();
	printf("digite o valor de B(divisor):");
	b = lerNum();
	if (a > b && (a%b) == 0) {
		printf("Sao multiplos!");
	}
	else {
		printf("Nao sao multiplos!");
	}
}

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
	printf("O total da compra eh: %.2f", precoF);
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
	printf("a circunferenci eh %.4f", area);
}

void ex12() {/*12. Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
Area = BASE * ALTURA/2. Utilize as variáveis AREA, BASE e ALTURA e os operadores 
aritméticos de multiplicação e divisão.*/

	float area, base, altura;

	printf("informe a base do triangulo: ");
	base = lerNum();
	printf("informe a altura do triangulo: ");
	altura = lerNum();

	area = (base*altura) / 2;
	printf("a area eh %.2f", area);

}

void ex13() {/*13. Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

Exemplo: Para n=4 a saída deverá ser 1,3,5,7.*/

	int num, i;

	printf("informe o numero: ");
	num = lerNum();
	num = num * 2;
	for (i = 0; i < num; i++) {
		if (i % 2 != 0) {
			printf("%i", i);
		} 
		else {
			printf(" ");
		}
	}
}

void ex14() {/*14. Escrever um programa que mostre a seguinte figura no alto da tela:
XXXXX
X	X
X	X
X	X
XXXXX */

	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == 0 || i==4) {
				printf("X");
			}
			else if (j == 0 || j == 4) {
				printf("X");
			}
			else if (j != 0 || j != 4) {
				printf(" ");
			}
		}
		printf("\n");
	}
}

void ex15() {/*15. Dados um inteiro x e um inteiro não-negativo n, calcular X elevado a N */

	float x, n, result;
	printf("informe a base da potencia: ");
	x = lerNum();
	printf("informe o expoente da potencia: ");
	n = lerNum();
	if (n < 0) { printf("valor invalido!!\n"); }
	else {
		result = pow(x, n);
		printf("\nO resultado da potencia eh: %.2f", result);
	}
}

void ex16() {/*16. Faça uma função que retorne a posição de um dado caracter dentro de uma string.*/

	int i;
	char st[]="asdfghzxcvbnasdfghjqwertyuasdfgh";
	char c = 'a';
	printf("%s\n", st);
	printf("a letra %c se encontra na(s) seguinte(s) posicao(es): \n", c);

	for (i = 0; i < sizeof(st); i++) {
		if (c == st[i]) {
			printf("- %i\n", i+1);
		}
	}
}

void ex17() {/*17. Implemente um programa que desenhe um "pinheiro" na tela, similar ao
abaixo.(Enriqueça o desenho com outros caracteres, simulando enfeites) "ARVORE DE NATAL" */

	printf("        O       \n");
	printf("        X \n");
	printf("       X0X\n");
	printf("      XXXXX\n");
	printf("     XX0X0XX\n");
	printf("    X0XX0XX0X\n");
	printf("   XXXXXXXXXXX\n");
	printf("  X0XXX0X0XXX0X\n");
	printf(" 0XXX0XXXXX0XXX0\n");
	printf("  |    XXX    |  \n");
	printf("  O    XXX    O \n");
	printf("     XXXXX\n");
}

void ex18() {/*18. Crie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte
configuração:
Digite um número:
4
Saida do programa:
1
12
123
1234
123
12
1*/

	int num,i,j,k,l;
	printf("digite um numero: ");
	num = lerNum();
	for (i = 0; i < num; i++) {
		for (j = 0; j <= i; j++) {
			printf("%i", j+1 );
		}
		printf("\n");
	}
	for (k = num-1; k > 0; k--) {
		for (l = 0; l < k; l++) {
			printf("%i", l+1);
		}
		printf("\n");
	}
}

void ex19() {/*19. Crie uma função capaz de multiplicar uma linha de uma matriz por um dado número.
Faça o mesmo para uma coluna.*/
	
	int i, j, linha, coluna, op;
	float mult=0, num, mat[3][3], result;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mat[i][j] = i + (j + 1);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%.2f\t", mat[i][j]);
		}
		printf("\n");
	}

	printf("escolha se quer multiplicar:\n1-Linha\n2-Coluna\n");
	op = lerNum();
	if (op == 1) {
		printf("informe a linha que quer multiplicar: ");
		linha = lerNum();
		printf("informe o numero a ser multiplcado pela linha: ");
		num = lerNum();

		
		for (i = num-1; i < linha; i++) {
			for (j = 0; j < 3; j++) {
				mult = mult + (num * mat[i][j]);
			}
		}

	}
	else if (op == 2) {

		printf("informe a coluna que quer multiplicar: ");
		coluna = lerNum();
		printf("informe o numero a ser multiplcado pela coluna: ");
		num = lerNum();

		for (i = 0; i < 3; i++) {
			for (j = num-1; j < coluna; j++) {
				mult = mult + (num * mat[i][j]);
			}
		}
	}
	result = mult;
	printf("o resultado eh: %f", result);

}

void ex20() {/*20. Crie uma função capaz de substituir todos os números negativos de uma matriz por
seu módulo.*/
	
	int i, j;
	float mat[3][3];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mat[i][j] = i + (j * -2);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%.2f\t", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			mat[i][j] = abs(mat[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%.2f\t", mat[i][j]);
		}
		printf("\n");
	}

}

void ex21() {/*21. Dados n e uma seqüência de n números inteiros, determinar a soma dos números
pares.*/

	int i, num, seq[10], soma=0;

	printf("informe a quantidade de valores que serão digitados: ");
	num = lerNum();
	for (i = 0; i < num; i++) {
		printf("informe o %i numero: ", i + 1);
		seq[i] = lerNum();
	}
	for (i = 0; i < 10; i++) {
		if ((seq[i] % 2) == 0) {
			soma = soma + seq[i];
		}
	}
	
	printf("o resultado eh: %i", soma);
}

void ex22() {/*22. Escreva um programa que lê uma matriz quadrada 3x3 e apresenta na tela a sua
matriz transposta.*/

	float mat[3][3];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("informe o valor da %i linha e %i coluna: ", i + 1, j + 1);
			scanf_s("%f", &mat[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%.2f\t", mat[i][j]);
		}
		printf("\n");
	}
	printf("\nmatriz transposta!\n\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%.2f\t", mat[j][i]);
		}
		printf("\n");
	}
}

void ex23() {/*23. Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma
viagem, utilizando um automóvel que faz 12Km por litro. Para obter o cálculo, o
usuário deve fornecer o tempo gasto na viagem e a velocidade média durante ela.
Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA =
TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade de
litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS =
DISTANCIA / 12. O programa deve apresentar os valores da velocidade média,
tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na
viagem.*/

	float velo, tempo, dist, lit;

	printf("informe o tempo gasto na viagem(em min): ");
	tempo = lerNum();
	tempo = tempo / 60;
	printf("informe a velocidade media da viagem: ");
	velo = lerNum();
	dist = tempo * velo;
	lit = dist / 12;
	printf("\n-Velocidade Media: %.2f km/h\n-Tempo gasto: %.2f h\n-Distancia Percorrida: %.2f km\n-Gasolina Utilizada: %.2f litros\n", velo, tempo, dist, lit);

}

void ex24() {/*24. Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca dos
valores de forma que a variável A passe a possuir o valor da variável B e a variável
B passe a possuir o valor da variável A. Apresente os valores trocados.*/

	float a, b, aux;
	printf("informe o valor de A e B: ");
	a = lerNum();
	b = lerNum();
	printf("\nA=%.2f e B=%.2f\n\n...\n\n", a, b);
	aux = a;
	a = b;
	b = aux;
	printf("\nA=%.2f e B=%.2f\n", a, b);

}

void ex25() {/*25. Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do
trabalhador como contribuição à previdência social. Após esse desconto, há um
outro desconto de 5% sobre o valor restante do salário bruto, a título de um
determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão e
imprima o seu salário líquido.*/

	float salB, salL, sal;

	printf("Informe o Salario bruto: ");
	salB = lerNum();
	sal = salB - (salB*0.25);
	salL = sal - (sal*0.05);
	printf("O salario liquido eh de: %.2f", salL);

}

void ex26() {/*26. Escreva um algoritmo que determine o número de dias que uma pessoa já viveu.
Considere que um mês tenha 30 dias.*/

	int dia, mes, ano, total, anoatual;
	printf("informe a data do seu nascimento:\ndia: ");
	dia = lerNum();
	printf("mes: ");
	mes = lerNum();
	printf("ano: ");
	ano = lerNum();

	printf("informe o ano atual: ");
	anoatual = lerNum();

	dia = 30 - dia;
	mes = (12 - mes) * 30;
	ano = (anoatual - ano) * 360;

	total = dia + mes + ano;
	printf("voce viveu aproximadamente %i dias", total);
}

void ex27() {/*27. Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais.
Considerando que alguém está pagando uma compra, escreva um algoritmo que
mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre
também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota do
troco. Suponha que o sistema monetário não utilize moedas.*/

	int vcompra, troco, pag;
	int nota100, nota10, nota1;

	printf("Digite o valor da compra: ");
	vcompra = lerNum();
	printf("Digite o em dinheiro: ");
	pag = lerNum();

	troco = pag - vcompra;


	nota100 = (troco - (troco%100)) / 100;
	nota10 = (troco % 100) / 10;
	nota1 = (troco % 10);

	printf("Notas de 100: %i \nNotas de 10: %i \nNotas de 1: %i \n", nota100, nota10, nota1);

}

void ex28() {/*28. A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores
dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro vendido e
mais 5% do valor das vendas. Faça um algoritmo que determine o salário total de
um vendedor.*/

	int qt, i;
	float valorCarro, porc = 0, comissao, comi, sal, salario;
	printf("informe o valor do salario minimo: ");
	sal = lerNum();
	sal = sal * 2;
	printf("informe a quantidade de vendas do mes: ");
	qt = lerNum();
	comi = qt * 50;

	for (i = 0; i < qt; i++) {
		printf("informe o valor da %i venda: ", i+1);
		valorCarro = lerNum();
		porc = porc + (valorCarro*0.05);
		valorCarro = 0;
	}

	salario = sal + comi + porc;
	printf("O salario filnal e de %.2f reais!", salario);
	
}

void ex29() {/*29. Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados
de um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele ou
escaleno. Se eles não formarem um triângulo, escrever uma mensagem.
Antes da elaboração do algoritmo, torna-se necessário a revisão de algumas
propriedades e definições.
Propriedade – o comprimento de cada lado de um triângulo é menor do que a soma
dos comprimentos dos outros dois lados.
Definição 1 - chama-se de triângulo equilátero o que tem os comprimentos dos três
lados iguais;
Definição 2 - chama-se de triângulo isóscele o triângulo que tem os comprimentos
de dois lados iguais;
Definição 3 - chama-se triângulo escaleno o triângulo que tem os comprimentos dos
três lados diferentes.*/

	float x, y, z;
	printf("Informe o comprimento dos lados do triangulo: ");
	printf("\nX- ");
	x = lerNum();
	printf("\nY- ");
	y = lerNum();
	printf("\nZ- ");
	 z = lerNum();

	if ((x < y + z) && (y < x + z) && (z < x + y)) {

		if ((x == y) && (y == z)) {
			printf("Essas medidas formam um triangulo equilatero!");
		}
		else if ((x == y) || (x == z) || (y == z)) {
			printf("Essas medidas formam um triangulo isoceles!");
		}
		else {
			printf("Essas medidas formam um triangulo escaleno!");
		}
	}
	else {
		printf("Essas medidas nao formam um triangulo!");
	}
}

void ex30()	{/*30. Crie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte
configuração:
Digite um número:
7
Saida do programa:
1234567
x123456
xx12345
xxx1235
xxxx123
xxxxx12
xxxxxx1
*/

	int i, j, k, num;

	printf("digite um numero de 2 a 20: ");
	num = lerNum();

	for (i = 0; i < num; i++)
	{
		k = 1;
		for (j = 0; j < num; j++)
		{
			if (j < i)
			{
				printf("X");
			}
			else
			{
				printf("%i", k);
				k = k + 1;
			}

		}
		printf("\n");
	}


}

void ex31()	{/*31. Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos
destes valores são negativos, escrevendo esta informação.*/

	int i, cont=0;
	float num[5];

	for (i = 0; i < 5; i++) {
		printf("digite o numero: ");
		num[i] = lerNum();
		if (num[i] < 0) {
			cont++;
		}
	}
	printf("%i sao numeros negativos!", cont);
}

void ex32()	{/*32. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
dados sobre o salário e número de filhos. A prefeitura deseja saber:
● a) média do salário da população;
● b) média do número de filhos;
● c) maior salário;
● d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo. (Use o
comando WHILE)*/

	int filhos, sal100 = 0, totfilhos = 0;
	float mediafilhos, mediasal = 0, maiorsal = 0, sal = 0, cid = 0, saltotal = 0, porcsal100;

	while (sal >= 0) {
		cid++;

		printf("informe o salario: ");
		if (sal < 0) { break; }
		sal = lerNum();
		if (sal > maiorsal) { maiorsal = sal; }
		saltotal = saltotal + sal;
		if (sal <= 100) { sal100++; }

		printf("informe o numero de filhos: ");
		filhos = lerNum();
		totfilhos = totfilhos + filhos;

	}
	mediasal = saltotal / cid;
	mediafilhos = totfilhos / cid;
	porcsal100 = (sal100 * 100) / cid;
	printf("a media salarial da populacao e= %.2f\n",mediasal);
	printf("a media de filhos da populacao e= %.2f\n", mediafilhos);
	printf("o maior salario e= %.2f\n", maiorsal);
	printf("percentual de pessoas que recebem ate 100 reais= %.2f\n", porcsal100);
}

void ex33() {/*33. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e
cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.
*/

	float altchico=1.50, altze=1.10;
	int ano=0;

	while (altze <= altchico) {
		ano++;
		altchico = altchico + 0.02;
		altze = altze + 0.03;
	}
	printf("ze sera maior que chico depois de %i anos!", ano);


}

void ex34() {/*34. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles.
Mostre o resultado.*/

	int i, maior, menor, valor;

	for (i = 0; i < 50; i++) {
		printf("digite o %i numero: ",i+1);
		valor = lerNum();
		if (i = 0) {
			maior = valor;
			menor = valor;
		}
		if (valor < menor) {
			menor = valor;
		}
		if (valor > maior) {
			maior = valor;
		}
	}
	printf("\nMaior: %i\nMenor: %i", maior, menor);
}

void ex35() {/*35. Foi realizada uma pesquisa de algumas características físicas da população de uma
certa região, a qual coletou os seguintes dados referentes a cada habitante para
serem analisados:
- idade
- sexo (masculino e feminino)
- cor dos olhos (1 - azuis, 2 - verdes ou 3 - castanhos)
- cor dos cabelos (1 - louros, 2 - castanhos, 3 - pretos)
Faça um algoritmo que determine e escreva:
- a maior idade dos habitantes
- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos
inclusive e que tenham olhos verdes e cabelos louros.
O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.
*/

	int idade = 0, pop, olho, cabelo, idademaior = 0, cont = 0;
	char sexo;

	while (idade >= 0) {
		printf("informe sua idade: ");
		idade = lerNum();
		if (idade < 0) { break; }
		if (idade > idademaior) {
			idademaior = idade;
		}

		getchar();
		printf("informe seu sexo(M ou F): ");
		sexo = getchar();
		printf("informe a cor dos olhos: ");
		olho = lerNum();
		printf("informe a cor do cabelo: ");
		cabelo = lerNum();

		

		if ((sexo = 'f') || (sexo = 'F')) {
			if ((idade >= 18) && (idade <= 35)) {
				if (olho == 2) {
					if (cabelo == 1) {
						cont++;
					}
				}
			}
		}
	}
	printf("a maior idade e: %i\n", idademaior);
	printf("%i pessoas sao do sexo feminino, tem entre 18 e 35 anos, olhos verdes e cabelos louros!", cont);
}

void ex36()	{/*36. Escrever um algoritmo que leia 20 valores para uma variável n e, para cada um
deles, calcule a tabuada de 1 até n. Mostre a tabuada na forma:
1 x n = n
2 x n = 2n
3 x n = 3n
.......
n x n = n2*/

	int i, j, n;

	for (i = 0; i < 20; i++) {
		printf("informe o valor para n: ");
		n = lerNum();
		for (j = 0; j <= n; j++) {
			printf("%i * %i = %i\n", j, n, j*n);
		}
	}


}

void ex37() {/*37. Escreva uma função que receba dois structs do tipo dma, cada um representando
uma data válida, e devolva o número de dias que decorreram entre as duas datas.
struct dma {
int dia;
int mes;
int ano;
};*/

	struct dma { float dia, mes, ano; };

	dma data1, data2;
	int ano, dia, mes, totaldias;

	printf("***DATA MAIOR***\n");
	printf("1-informe o dia : ");
	data1.dia = lerNum();
	printf("1-informe o mes : ");
	data1.mes = lerNum();
	printf("1-informe o ano : ");
	data1.ano = lerNum();

	printf("***DATA MENOR***\n");
	printf("2-informe o dia : ");
	data2.dia = lerNum();
	printf("2-informe o mes : ");
	data2.mes = lerNum();
	printf("2-informe o ano : ");
	data2.ano = lerNum();

	ano = data1.ano - data2.ano;
	mes = data1.mes - data2.mes;
	dia = data1.dia - data2.dia;

	totaldias = (ano * 365) + (mes * 30) + dia;

	printf("dias- %i\nmes- %i\n dia- %i\n", dia, mes, ano);
	printf("o total de dias entre as duas datas eh: %i", totaldias);


}

void ex38() {/*38. Escreva uma função que receba um número inteiro que representa um intervalo de
tempo medido em minutos e devolva o correspondente número de horas e minutos
(por exemplo, converte 131 minutos em 2 horas e 11 minutos). Use uma struct como
a seguinte:
struct hm {
int horas;
int minutos;
};*/

	struct hm {	int horas, minutos;	};
	
	hm tempo;
	int min;
	printf("informe a quantidade de minutos: ");
	min = lerNum();
	tempo.horas = min / 60;
	tempo.minutos = min % 60;
	printf("Os minutos informados convertidos ficam %i horas e %i minutos!", tempo.horas, tempo.minutos);

}

void ex39() {/*39. Escrever um programa que cadastre o nome, a altura, o peso, o cpf e sexo de
algumas pessoas. Com os dados cadastrados, em seguida localizar uma pessoas
através do seu CPF e imprimir o seu IMC.*/

	struct pe
	{
		char nome[20], sexo;
		float altura, peso;
		double cpf;
	};

	pe pessoa[3];
	int i, posicao;
	float imc;
	double cpf;

	for (i = 0; i < 3; i++) {
		printf("***Pessoa %i***\n", i + 1);
		getchar();
		printf("informe o nome: ");
		fgets(pessoa[i].nome, 20, stdin);
		printf("informe o cpf: ");
		pessoa[i].cpf = lerNum();
		getchar();
		printf("informe o sexo: ");
		pessoa[i].sexo = getchar();
		printf("informe a altura: ");
		pessoa[i].altura = lerNum();
		printf("informe o peso: ");
		pessoa[i].peso = lerNum();
		printf("\n");
	}
	printf("\n\n");

	printf("Informe o cpf que quer buscar: ");
	cpf = lerNum();
	for (i = 0; i < 3; i++) {
		if (cpf == pessoa[i].cpf) {
			posicao = i;
			printf("Pessoa encontrada!\n\n");
		}
	}
	system("pause");

	imc = pessoa[posicao].peso/pow(pessoa[posicao].altura, 2);
	printf("\nSeu imc eh: %.2f\n\n", imc);
	if (imc <= 17) {
		printf("Situacao = Muito abaixo do peso!\n");
	}
	else if (imc > 17 && imc <= 18.49) {
		printf("Situacao = Abaixo do peso!\n");
	}
	else if (imc > 18.5 && imc <= 24.99) {
		printf("Situacao = Peso Normal!\n");
	}
	else if (imc > 25 && imc <= 29.99) {
		printf("Situacao = Acima do peso!\n");
	}
	else if (imc > 30 && imc <= 34.99) {
		printf("Situacao = Obesidade I!\n");
	}
	else if (imc > 35 && imc <= 39.99) {
		printf("Situacao = Obesidade II(severa)!\n");
	}
	else {
		printf("Situacao = Obesidade III(morbida)!\n");
	}

}




int main() {
	ex3();
}
