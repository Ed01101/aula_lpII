/*
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	int n, i=0;
	float soma=0,  media;
	while(i<5)
	{
		printf("Digite um número:\n");
		scanf("%d", &n);
		soma = soma + n;
		i++;
	}
	media = soma/5;
	printf("Soma:%.2f\n", soma);
	printf("Media:%.2f\n", media);
	return 0;
}
