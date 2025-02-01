#include <stdio.h>

int main() {
	int num1 = 50, num2 = 20;
	int maior;
	
	num1 > num2 ? (maior = num1) : (maior = num2);
	
	printf("Numero 1: %d\n", num1);
	printf("Numero 2: %d\n", num2);
	
	printf("O numero maior e: %d\n", maior);
	
	return 0;
}
