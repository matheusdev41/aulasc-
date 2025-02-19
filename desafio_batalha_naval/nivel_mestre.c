#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main()
{
    int tabuleiro[LINHAS][COLUNAS];
    int cone[2] = {0, 2};
    // Inicializa a matriz 10x10
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Cone
    for (int j = 0; j < 3; j++){
        if (j == 0){
            int x = cone[0]; 
            int y = cone[1];
            if (x < LINHAS && y < COLUNAS && tabuleiro[x][y] != 3){
                tabuleiro[x][y] = 3;
            }   

        } else if (j == 1){
            int x = cone[0] + j;
            int y = cone[1] - j;
            if (x < LINHAS && y < COLUNAS && tabuleiro[x][y] != 3){
                for (int n = 0; n < 3; n++){
                    tabuleiro[x][y + n] = 3;
                } 
            }

        } else if (j == 2) {
            int x = cone[0] + j;
            int y = cone[1] - j;
            if (x < LINHAS && y < COLUNAS && tabuleiro[x][y] != 3){
                for (int n = 0; n < 5; n++){
                    tabuleiro[x][y + n] = 3;
                }
            }
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
