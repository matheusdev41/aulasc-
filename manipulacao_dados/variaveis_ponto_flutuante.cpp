#include <stdio.h>

// DOUBLE AND FLOAT 
// DIFEREN�A DOUBLE + PRECISO QUE O FLOAT

int main() {
	float x = 5.5;
	float y = 2.2;
	float soma = x + y;
	float diferenca = x - y;
	float produto = x * y;
	float quociente = x / y; // Divis�o de ponto flutuante
	
	printf("Soma = %.2f\n", soma); // resultado sendo impresso com 2 casas decimais
	printf("Diferenca: %.2f\n", diferenca);
	printf("Produto: %.2f\n", produto);
	printf("Quociente: %.2f\n", quociente);
	
	return 0;
}
