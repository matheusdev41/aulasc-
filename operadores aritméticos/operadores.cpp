#include <stdio.h>

int numero1, numero2;

void soma(x, y){
	int resultado;
	resultado = x + y;
	return resultado;
}

int main(){
	/*
	Soma (+)
	Subtração (-)
	Multiplicação (*)
	Divisão (/)
	*/
	
	int resultado, subtracao, multiplicacao, divisao;
	
	printf("Entre com o numero1: \n");
	scanf("%d", &numero1);
	
	printf("Entre com o numero2: \n");
	scanf("%d", &numero2);
	
	printf("O numero1 e: %d\n", numero1);
	printf("O numero2 e: %d\n", numero2);
	
	
	resultado = soma(numero1, numero2);
	subtracao = numero1 - numero2;
	multiplicacao = numero1 * numero2;
	divisao = numero1 / numero2;
	
	printf("A soma deles e: %d", soma);
	
	return 0; 
}
