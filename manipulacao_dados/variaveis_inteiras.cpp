#include <stdio.h>

// V�RI�VEIS INTEIRAS

int main() {
	int a = 10;
	int b = 3;
	int soma = a + b;
	int diferenca = a - b;
	int produto = a * b;
	int quociente = a / b;
	
	printf("Soma: %d\n", soma);
	printf("Diferenca: %d\n", diferenca);
	printf("Produto: %d\n", produto);
	printf("Quociente: %d\n"); // Note que a divis�o de inteiros resulta em n�mero flutuante
	
	return 0;
}
