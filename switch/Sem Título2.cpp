#include <stdio.h>

int main(){
	
	int variavel;
	
	printf("Digite um valor: \n");
	scanf("%d", &variavel);
	
	switch (variavel) {
		case 1: printf("Codigo a ser executado se variavel for 1"); break;
		case 2: printf("Codigo a ser executado se variavel for 2"); break;
		case 3: printf("Codigo a ser executado se variavel for 3"); break;
		default : printf("caso a variavel nao seja 1, 2 ou 3.");
	}
	
	
}
