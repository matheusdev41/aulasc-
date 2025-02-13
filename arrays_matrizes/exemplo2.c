#include <stdio.h>

// Programa exibe somente os números pares de um vetor de 5 inteiros 
int main() {
    int vetor[5]; // Declaração de um vetor de 5 inteiros 

    // Inicialização do vetor usando o loop 'for'
    for ( int i = 0; i < 5; i++) {
        vetor[i] = i * 2;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}