#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int paresCount = 0, imparesCount = 0;
    for (int i = 0; i < 3; i++){
        for ( int j = 0; j < 3; j++){
            if (matriz[i][j] % 2 == 0) {
                paresCount++; // Incrementa o contador de números pares 
            } else {
                imparesCount++; // Incremeta o contador de números ímpares
            }
        }
    } 
    // Impressão de resultados
    printf("Quantidade de numeros pares: %d\n", paresCount);
    printf("Quantidade de numeros impares: %d\n", imparesCount);

    return 0;
}