#include <stdio.h>

int main() {
	int idade = 25;
	float altura = 1.75;
	char opcao = 's';
	char nome[20] = "Matheus";
	
	
	// Sintaxe padr�o printf
	//printf("texto com formata��o", variavel1, variavel2, ..., variaveln);
	printf("Ola mundo! \n");
	printf("Idade: %d \n", idade);
	printf("Altura: %f \n", altura);
	printf("Op��o: %c \n", opcao);
	printf("Nome: %s \n", nome);
	
	
	
	/*
	printf("%formato1 %formato2, variavel1, variavel2)
	
	
	%d: imprime um inteiro no formato decimal.
	%i: equivalente a %d.
	%f: imprime um n�mero em ponto flutuante no formato padr�o
	%e: imprime um n�mero em ponto flutuante na nota��o cient�fica
	%c: imprime um �nico caractere.
	%s: imprime uma cadeia (string) de caracteres.
	*/
	
}
