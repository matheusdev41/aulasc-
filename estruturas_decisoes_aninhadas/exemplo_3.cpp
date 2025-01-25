#include <stdio.h>


int main() {
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if (numero > 0) {
		printf("O numero e positivo. \n");
		
		if(numero % 2 == 0) {
			printf("O numero e par. \n");
		} else {
			printf("O numero e impar. \n");
		}
		
	} else if (numero == 0){
		printf("O numero e zero. \n");
		
	} else {
		printf("O numero negativo. \n");
	}
}
