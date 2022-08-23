#include <stdio.h>

int main(int arg, char** argv)
{
	int a;

	do{
		printf("Digite um numero: ");
		scanf("%d", &a);

		if(a<0 || a>10)
		{
			printf("Valor Inválido\n");
		}
	}
	while(a<0||a>10);


	return 0;

}
