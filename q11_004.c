#include <stdio.h>

int main(int argc, char** argv)
{
	int num,f=1;

	printf("Digite o número desejado: ");
	scanf("%d", &num);

	do{

		printf("|%d|", num);
		f=f*num;
		num=num-1;
	}
	while(num!=0);

	printf(" \n O Fatorial é: |%d| ", f);

	return 0;

}
