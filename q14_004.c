#include <stdio.h>

int main(int argc, char**argv)
{

    int n;
    float termo, resultado = 0, controlador =1;

	printf("Numero de termos: ");
	scanf("%d", &n);
	printf("H = "); //só para construir uma representação da soma de todos os termos, pra ficar bonitinho

	while(controlador<=n)
	{
		termo = (1/controlador); //calcula o valor da fração

		if(controlador>1) //aq tô construindo um texto representando todo o cáuculo
			printf("1/%.0f", controlador);

		else
			printf("1");

		if((n-controlador) > 0) //verifica se tem um número a frente para ser somado, se sim, adiciona um '+' ao texto

			printf(" + ");

			resultado = resultado + termo; //acumula o resultado dos laços
			controlador ++; //incrementa o controlador pra fechar o laço de repetição
	}

	printf("\nResultado de H = %.2f", resultado);
	return 0;
}
