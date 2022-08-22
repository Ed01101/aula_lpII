#include <stdio.h>

int main(int argc, char**argv)
{

	int n1, n2, x;

	printf("Digite um número: ");
	scanf("%d", &n1);
	printf("Digite um número: ");
	scanf("%d", &n2);

	while(n1<n2)
	{
		n1 = n1+1;
		printf("%d", n1);
	}

	return 0;
}
