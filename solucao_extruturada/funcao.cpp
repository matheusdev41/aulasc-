#include <stdio.h>

void SOMA(float a, float b){ // Função soma
	float resultado;
	resultado = a + b;
	printf("A soma de %6.1f + %6.1f = %6.1f\n%",a,b,resultado);
}

void SUBTRAIR(float a, float b){ // Função subtração
	float resultado;
	resultado = a - b;
	printf("A subtracao de %6.1f - %6.1f = %6.1f\n%",a,b,resultado);
}

void MULTIPLICAR(float a, float b){ // Função multiplicação
	float resultado;
	resultado = a * b;
	printf("A multiplicacao de %6.1f * %6.1f = %6.1f\n%",a,b,resultado);
}

void DIVIDIR(float a, float b) {
	float resultado;
	resultado = a / b;
	printf("A divisao de %6.1f / %6.1f = %6.1f\n%",a,b,resultado);
	
}


int main(){
	float a;
	float b;
	
	printf("Entre com o primeiro numero: \n");
	scanf("%f", &a);
	
	printf("Entre com o segundo numero: \n");
	scanf("%f", &b);
	
	SOMA(a,b); // chamada da função soma
	SUBTRAIR(a,b); // chamada da função subtrair
	MULTIPLICAR(a,b); // chamada da função multiplicar
	DIVIDIR(a,b); // chamada da função multiplicar
	
	return 0;
}
