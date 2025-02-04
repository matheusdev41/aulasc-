#include <stdio.h>

// Imprimir apenas números pares de 1 a 10;
int main() {

    int num = 2;

    while (num <= 10){
        if (num % 2 == 0)
        {

            printf("O numero %d e par!\n", num);
            num++;

        } else {

            num++;
            
        }
    }

    return 0;
}