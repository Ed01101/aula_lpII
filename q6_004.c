#include <stdio.h>

int main(int argc, char**argv)
{
    //declarando variáveis
    int n1, n2, resultado, controlador= 1;

    //entrada de dados
    printf("Digite o numero base: ");
    scanf("%d", &n1);
    printf("Digite o numero expoente: ");
    scanf("%d", &n2);

    if(n2==0)
    { //valida se o expoente é 0
        resultado = 1;
    }
    else
    {
        while(controlador <= n2)
        { // inicializando while. Ele deve ser menor ou igual ao expoente, que é n2
            if(controlador==1)
                resultado = n1;
            else
                resultado = resultado * n1;
            controlador ++; // Incrementa a variável 'controlador' para saber quando sair do laço de repetição
        }
    }

    printf("Resultado: %d", resultado);

    return 0;
}
