#include <stdio.h>

// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if(n > 0) {
        printf("%d\n", n);
        
        recursiveLoop(n - 1);
    } 
}

int main() {

    int numero = 5;

    printf("Contagem regressiva\n");
    recursiveLoop(numero);

    return 0;

}
