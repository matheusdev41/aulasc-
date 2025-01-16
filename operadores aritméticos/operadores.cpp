#include <stdio.h>

void SOMA(float a, float b){
	float resultado;
	resultado = a + b;
	printf("A soma de %6.3f com %6.3f é %6.3f\n%", a, b , resultado);
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
	
	
	return 0; 
}
