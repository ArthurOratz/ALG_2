// Aula2310_Condicionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

double LerSalario() 
{
	float sal;
	printf("Digite o Salario:");
	scanf_s("%f", &sal);
	return sal;
}

double CalculaIR(double sal, double aliquota, double deducao)
{
	return(sal*aliquota) - deducao;
}

void ApresentarIR(double sal)
{
	double ir = 0;

	if (sal <= 1903.98)
	{
		printf("Isento");
	}
	else if (sal <= 2826.65)
	{
		ir = CalculaIR(sal, 0.075, 142.8);
		printf("Aliquota: 7.5%%, Deducao:142.80\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %.2f", sal - ir);
	}
	else if (sal <= 3751.05)
	{
		ir = CalculaIR(sal, 0.15, 354.8);
		printf("Aliquota: 15%%, Deducao:354.80\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %.2f", sal - ir);
	}
	else if (sal <= 4664.68)
	{
		ir = CalculaIR(sal, 0.225, 636.13);
		printf("Aliquota: 22.5%%, Deducao:636.13\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %.2f", sal - ir);
	}
	else
	{
		ir = CalculaIR(sal, 0.275, 869.36);
		printf("Aliquota: 27.5%%, Deducao:869.36\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %.2f", sal - ir);
	}
}



int main()
{
	double salario = LerSalario();
	ApresentarIR(salario);
	printf("\n\n");
	system("pause");
}
