#include <stdio.h>

void menuInicial(int *inic){
    printf("-- Menu inicial --\n");
    printf("1 - Iniciar\n");
    printf("2 - Sair\n");
    scanf("%d", inic);
}

void calculaSoma(int num){
    int resultado;

    for(int i = 1; i <= 10; i++){
        resultado = num + i;
        printf("%d + %d = %d\n", num, i, resultado);
    }
}

void calculaSubtracao(int num){
    int resultado;

    for(int i = 1; i <= 10; i++){
        resultado = num - i;
        printf("%d - %d = %d\n", num, i, resultado);
    }
}

void calculaMultiplicacao(int num){
    int resultado;

    for(int i = 1; i <= 10; i++){
        resultado = num * i;
        printf("%d + %d = %d\n", num, i, resultado);
    }
}

void calculaDivisao(int num){
    int resultado;

    for(int i = 1; i <= 10; i++){
        resultado = num / i;
        printf("%d + %d = %d\n", num, i, resultado);
    }
}



int main() {
    int inicio;

    menuInicial(&inicio);
    do {

        int num, resultado, operador;

        printf("-- TABUADA --\n");
        printf("Digite um numero entre 1 e 9: ");
        scanf("%d", &num);

        printf("Digite o operador: \n");
        scanf("%d", operador);

        

        menuInicial(&inicio);
    } while (inicio == 1);

    return 0;
}
