#include <stdio.h>

void verificaIdade(int idad){
	
	
	if(idad > 0){ //verifica se a idade não é negativa
	
		if (idad < 12){
			printf("Voce e Crianca");
		} else if (idad >= 12 && idad < 18){
			printf("Voce e Adolecente");
		} else if (idad >= 18 && idad < 60) {
			printf("Voce e Adulto");
		} else {
			printf("Voce e Idoso");
		}
		
	} else {
		printf("ERRO, idade invalida!");
	}
	
}

int main (){
	
	int idade;
	
	printf("Entre com a idade: \n");
	scanf("%d", &idade);
	
	verificaIdade(idade);
	
	return 0;
}
