#include <stdio.h>

int main() {
	int num1 = 20, num2 = 20;
	int maior;
	
	if (num1 != num2){
		
		maior = num1 > num2 ? 1 : 0;
		
		printf("Numero 1: %d\n", num1);
		printf("Numero 2: %d\n", num2);
		
		if (maior == 1) {
			printf("O numero 1 e maior que o numero 2");
		} else {
			printf("O numero 1 e menor que o numero 2");
		}
		 
	} else {
		printf("Os numeros sao iguais");
	}
	
	return 0;
	
}
