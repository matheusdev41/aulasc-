#include <stdio.h>


int main() {
	
	short int numeroPequeno = 32767; // Valor máximo de short int
	printf("Numero pequeno (short int): %d\n", numeroPequeno);
	
	numeroPequeno = 32768; // Valor maior que o máximo de short int
	printf("Numero pequeno atualizado (short int): %d\n", numeroPequeno);
	
	printf("\n*** Tamanho das variaveis **\n");
	printf("Short int: %lu B\n", sizeof(short int));
	printf("int: %lu B\n", sizeof(int));
	printf("long int: %lu B\n", sizeof(long int));
	printf("Float: %lu B\n", sizeof(float));
	printf("Double: %lu B\n", sizeof(double));
	printf("Long Double: %lu B\n", sizeof(long double));
	
	return 0;
}
