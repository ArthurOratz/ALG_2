// Aula1110_Funcoes.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

void Helloword()
{
	printf("\nHello Word\n");
}
	
int somar2valores(int x, int y)
{
	int c;
	c = x + y;
	return c;
}
int LerNumeroInteiro()
{
	printf("\nFavor digitar um numero inteiro: ");
	int numero;
	scanf_s("%i", &numero);
	return numero;
}

int main()
{
	Helloword();

	int a = somar2valores(55, 44);
	printf("Resultado da soma: %i\n", a);

	int PrimeiroValor = LerNumeroInteiro();
	int SegundoValor = LerNumeroInteiro();
	int d = somar2valores(PrimeiroValor, SegundoValor);
	printf("Resultado da soma: %i\n", d);
	 
	system("pause");
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
