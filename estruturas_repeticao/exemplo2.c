#include <stdio.h>

// Retornando apenas os números ímpares 
int main()
{
    int numero;

    do
    {
        
        printf("Digite um numero par para sair do programa: \n");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("O numero %d e par\n", numero);
        } else {
            printf("O numero %d e impar\n", numero);
        }

    } while (numero % 2 != 0);

    printf("Voce digitou um numero par, saindo do programa...");
    return 0;
}
