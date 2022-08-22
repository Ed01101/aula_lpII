/*
Herbert Lucas Corrêa Fonseca - 2015090044
*/

#include  <stdio.h>

int main (int argc, char **argv)
{
	int n, maior=-99999, i=0;
	while(i<5)
	{
		printf("Digite o número:\n");
		scanf("%d", &n);
		if (n>maior)
		{
			maior=n;
		}
		i++;
	}
	printf("O maior número:%d\n", maior);
	return 0;
}
