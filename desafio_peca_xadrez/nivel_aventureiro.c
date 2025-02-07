#include <stdio.h>

int main()
{
    // Variaveis para controle de movimentação das peças
    // Bispo, Torre, Rainha
    int nCasasBispo = 5;
    int nCasasTorre = 5;
    int nCasasRainha = 8;

    // Simulação da movimentação do Bispo
    printf("--- Movimento Bispo ---\n"); 
    for(int i = 0; i < nCasasBispo; i ++){ 
        printf("Direita/Cima\n");
    }

    // Simulação da movimentação da Torre
    printf("--- Movimento Torre ---\n"); 
    for(int i = 0; i < nCasasTorre; i ++){
        printf("Direita\n");
    }

    // Simulação da movimentação da Rainha
    printf("--- Movimento Rainha ---\n"); 
    for(int i = 0; i < nCasasRainha; i ++){
        printf("Esquerda\n");
    }

      // Simulação da movimentação do Cavalo
    printf("--- Movimento Cavalo ---\n"); 
    for(int i = 0; i < 1; i ++){

        while (i < 2)
        {
            printf("Baixo\n");
            i++;
        }

        printf("esquerda\n");
    }

    return 0;
}

