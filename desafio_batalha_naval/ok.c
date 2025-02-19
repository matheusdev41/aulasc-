#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    
    int tabuleiro[LINHAS][COLUNAS];

    // Inicializa o tabuleiro 10x10 com 0
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas dos navios
    int navio1[2] = {4, 1};
    int navio2[2] = {3, 5};

    // Posicionando navio1 (tamanho 3)
    for (int j = 0; j < 3; j++) {
        int x = navio1[0];
        int y = navio1[1] + j;
        if (y < COLUNAS) { 
            tabuleiro[x][y] = 3;
        }
    }

    // Posicionando navio2 (tamanho 3)
    for (int j = 0; j < 3; j++) {
        int x = navio2[0];
        int y = navio2[1] + j;
        if (y < COLUNAS) { 
            tabuleiro[x][y] = 3;
        }
    }

    // Impressão do tabuleiro final
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}