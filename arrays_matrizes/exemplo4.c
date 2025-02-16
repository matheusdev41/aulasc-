#include <stdio.h>

int main() {
    int vetor[5];
    int soma = 0;

    // Fornecendo valores ao vetor
    for(int i = 0; i < 5; i++) {
        printf("Digite o numero %d: \n", i);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 5; i++){
        soma += vetor[i];
    }

    printf("A soma dos elementos do vetor e: %d\n", soma);

    return 0;
}