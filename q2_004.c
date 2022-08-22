#include <stdio.h>

int main(int argc, char** argv)
{
	int soma,media,i=1, num;

	do{
		printf("Digite o %d° numero: ",i++);
		scanf("%d", &num);

		soma=soma+num;
	}
	while(i<=5);

	media=(soma/5);

	printf("soma: %d\n", soma);
	printf("media: %d\n", media);

	return 0;
}
