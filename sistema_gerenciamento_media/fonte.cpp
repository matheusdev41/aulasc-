#include <stdio.h>

float calculaMedia() {
	float nota1, nota2, resultado;
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &nota1);
	
	// Validação da nota 1 
	while (nota1 < 0 || nota1 > 10) {
		printf("Nota invalida!\n");
		
		printf("Digite uma nota de 0 a 9: ");
		scanf("%f", &nota1);
	}
				
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
	
	// Validação da nota 2
	while (nota2 < 0 || nota2 > 10) {
		printf("Nota invalida!\n");
		
		printf("Digite uma nota de 0 a 9: ");
		scanf("%f", &nota2);
	}
	
	resultado = (nota1 + nota2) / 2;
	return resultado;
}

void determinaStatus(float result){
	float mediaAprovacao = 6;
	
	
	if (result >= mediaAprovacao){
		printf("Sua media foi: %.2f\n", result);
		printf("Voce foi aprovado\n");
		
	} else {
		printf("Sua media foi: %.2f\n", result);
		printf("Voce foi reprovado\n");
	}
}

int verificaOpcao(int num){
	
		while (num <= 0 || num >= 4) {
			printf("Opcao Invalida!\n");
			
			printf("Escolha uma opcao novamente: ");
			scanf("%d", &num);
		} 
	return num;	
}


int main() {
	int opcao;
	float media;
	
	do {
		
		printf("Menu de Gerenciamento de Estudantes\n");
		printf("1. Calcular Media\n");
		printf("2. Determinar Status\n");
		printf("3. sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
		
		opcao = verificaOpcao(opcao);
	
		switch (opcao)
		{
		case 1:	
			 media = calculaMedia();
			 printf("Sua media final foi: %.2f\n", media);
			 break;
			
		case 2:
			 printf("Entre com a media: ");
			 scanf("%f", &media);
			
			 determinaStatus(media);
			 break;
	   	 }  
					
		
	} while (opcao != 3);
	
	printf("Saindo!\n");
	printf("Ate logo!\n");
	
	return 0;
}
