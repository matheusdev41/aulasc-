#include <stdio.h>

int main() {
	int idade = 25;
	float altura = 1.75;
	char opcao = 's';
	char nome[20] = "Matheus";
	
	
	// Sintaxe padrão printf
	//printf("texto com formatação", variavel1, variavel2, ..., variaveln);
	printf("Ola mundo! \n");
	printf("Idade: %d \n", idade);
	printf("Altura: %f \n", altura);
	printf("Opção: %c \n", opcao);
	printf("Nome: %s \n", nome);
	
	
	
	/*
	printf("%formato1 %formato2, variavel1, variavel2)
	
	
	%d: imprime um inteiro no formato decimal.
	%i: equivalente a %d.
	%f: imprime um número em ponto flutuante no formato padrão
	%e: imprime um número em ponto flutuante na notação científica
	%c: imprime um único caractere.
	%s: imprime uma cadeia (string) de caracteres.
	*/
	
}
