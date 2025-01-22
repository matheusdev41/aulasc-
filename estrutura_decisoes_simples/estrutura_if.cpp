#include <stdio.h>

int main (){
	int idade;
	printf("Entre com a idade:\n");
	scanf("%d", &idade);
	if (idade > 18){
		printf("Voce e maior de idade e tem %d anos", idade);
	} else {
		printf("Voce e menor de idade e tem %d anos", idade);
	}
	
	return 0;
}
