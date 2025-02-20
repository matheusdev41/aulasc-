#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main()
{
    int tabuleiro[LINHAS][COLUNAS];
    int cone[2] = {0, 2};
    int cruz[2] = {6, 3};

    // Inicializa a matriz 10x10
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Cone
    for (int j = 0; j < 3; j++){
        int x = cone[0] + j; 
        int y = cone[1] - j;
    
        if (x >= LINHAS || y < 0){
            continue; // Condição para evitar acesso fora da matriz
        }

        int largura = 1 + (2 * j); // Largura de cada linha do cone
        int inicio = y;
        int fim = y + largura - 1;

        // Evita acesso fora do tabuleiro
        if (inicio < 0){
            inicio = 0;
        }
        if (fim >= COLUNAS) {
            fim = COLUNAS - 1;
        }

        for (int n = inicio; n <= fim; n++){
            tabuleiro[x][n] = 1;
        }
    
    }

    // Cruz
    for (int j = 0; j < 5; j++){
        // Posiciona coluna da cruz
        int x = cruz[0];
        int y = cruz[1] + j;

        // Condição para evitar acesso fora da matriz 
        if(x < LINHAS || y < COLUNAS){
            continue;
        }

        tabuleiro[x][y] = 1;
        for ( int n = 0; n < 3; n++){
            int x = (cruz[0] - 1) + n;
            int y = cruz[1] + 2;
            tabuleiro[x][y] = 1;
        } 

    }
    
    // Printa o tabuleiro
    for (int i = 0; i < LINHAS; i ++){
        for (int j = 0; j < COLUNAS; j++){
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }
        return 0;
}
