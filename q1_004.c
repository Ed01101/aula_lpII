#include<stdio.h>

int main(int argc, char**argv)
{

	int i=1, num, maior=0;

	do{
		printf("Digite o %d°número: ",i++);
		scanf("%d", &num);

		if(num>maior)
		{
			maior=num;
		}
	}
	while(i<=5);

	printf("o maior numero é: %d\n", maior);
	return 0;
}
