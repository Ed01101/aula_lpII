#include <stdio.h>

int main(int argc, char**argv)
{

	//declarando variáveis
	int num, div;

	//entrada de dados
	printf("Digite um número inteiro positivo: \n");
	scanf("%d", &num);

	while(num!=0)
	{
		div = num%10; //usei pra isolar a unidade de forma matematica
		printf("%d", div); //vai imprimir o valor isolado
		num = num/10; //vai isolar entre dezenas
	}

	return 0;
}
