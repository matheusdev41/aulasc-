// Condições de desconto
// + de 60 anos ou menos de 18 anos 
// ter uma renda mensal abaixo de 2000

#include <stdio.h>

int main() {
	int idade;
	float renda;
	
	printf("Entre com a idade: \n");
	scanf("%d", &idade);
	
	if( idade >= 60 || idade <= 18 ){
		
		printf("Entre com a renda: \n");
		scanf("%f", &renda);
		
		if(renda <= 2000){
			printf("QUALIFICADO\nVoce atende a todos os requisitos!");
		} else{
			printf("NAO QUALIFICADO\nA renda nao atende aos requisitos!");	
		}
		
	} else {
		printf("NAO QUALIFICADO\nA idade nao atende aos requisitos!");
	}
		
	return 0;	
}
