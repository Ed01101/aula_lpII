#include <stdio.h>

int main()
{

	int numero, i = 1, j, validacoes = 0, primo;

	printf("Digite o numero de valores: ");
	scanf("%d", &numero);

	printf("Numeros primos entre 1 e %d: ", numero);

	while(i <= numero)
	{
		if(i == 1)
		{
			primo = 0;
		}
		else if (i == 2)
		{
			primo = 1;
		}
		else
		{
    			j = 2;

			while(j < i)
    	    		{
    	    			validacoes ++;

    	        		if (i % j == 0)
		    	        {
					primo = 0;
					break;
				}
				else
				{
 					primo = 1;
 				}
				j++;
 			}

			if (primo == 1)
			{
				printf("\n%d ", i);
			}
		}

        i ++;
	}

	printf("\n");
	printf("Divisões: %d", validacoes);

	return 0;
}
