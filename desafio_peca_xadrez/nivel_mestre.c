#include <stdio.h>


// Função Recursiva movimentação do Bispo
void movimentoBispo(int num) {
    if (num > 0) {
        for(int i = 0; i < 1; i++){
                printf("Direita");

            for(int i = 0; i < 1; i++){
                printf("/Cima\n");

            }
        }
    movimentoBispo(num -1);
    }
}

// Função Recursiva movimentação da Torre 
void movimentoTorre(int num) {
    if (num > 0) {
        printf("Direita\n");
        movimentoTorre(num -1);
    }
}

// Função Recursiva movimentação da Rainha 
void movimentoRainha(int num) {
    if (num > 0) {
        printf("Esquerda\n");
        movimentoRainha(num -1);
    }
}

// Função movimentação do cavalo usando variáveis múltiplas
void movimentoCavalo() {
    for(int i = 0, j = 3; i < j; i ++, j--){
        printf("Cima\n");
    }
    printf("Direita");
}

int main()
{
    // Variaveis para controle de movimentação das peças
    // Bispo, Torre, Rainha
    int nCasasBispo = 5;
    int nCasasTorre = 5;
    int nCasasRainha = 8;

    // Simulação da movimentação do Bispo
    printf("--- Movimento Bispo ---\n");
    movimentoBispo(nCasasBispo);

    // Simulação da movimentação da Torre
    printf("--- Movimento Torre ---\n"); 
    movimentoTorre(nCasasTorre);

    // Simulação da movimentação da Rainha
    printf("--- Movimento Rainha ---\n"); 
    movimentoRainha(nCasasRainha);

      // Simulação da movimentação do Cavalo
    printf("--- Movimento Cavalo ---\n"); 
    movimentoCavalo();

    return 0;
}

