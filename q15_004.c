#include <stdio.h>

int main(int argc, char** argv)
{
	float n,m,s,i,u,t;

	i=1;
	u=1;

	printf("Digite os parâmetros N e M: \n");
	scanf("%f %f", &n,&m);

	do{
		t=n/m;
		s=i/u;
		printf("|%.2f|",s);

		i=i+1;
		u=u+2;
	}
	while(s!=t);

	printf("\n");

	return 0;
}
