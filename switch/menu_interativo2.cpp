#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarRegras() {
	printf("\nRegras do jogo:\n");
	printf("1. O computador gerara um numero secreto entre 0 e 9.\n");
	printf("2. Voce tera que adivinhar o numero fornecendo o palpite.\n");
	printf("3. Se acertar voce ganha\n\n");
}

int main() {
	int opcao;
	int numeroSecreto, palpite;
	
	do {
		//Exibe o menu principal
		printf("Menu principal\n");
		printf("1. Iniciar Jogo\n");
		printf("2. Ver Regras\n");
		printf("3. Sair \n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				// Gera um número aleatório entre 0 a 9 
				srand(time(0));
				numeroSecreto = rand() % 10;
				
				printf("Digite um numero de 0 a 9: ");
				scanf("%d", &palpite);
				
				//Valida entrada de número
				while (palpite > 9 || palpite < 0) {
					printf("Numero invalido!\n");
					printf("Digite um numero de 0 a 9: ");
					scanf("%d", &palpite);
				}
				
				// Verifica o palpite
				if (palpite == numeroSecreto){
					printf("Voce acertou!\n");
					printf("O numero secreto e %d\n\n", numeroSecreto);
				} else {
					printf("Voce errou!\n");
					printf("O numero secreto e %d\n\n", numeroSecreto);
				}
				
				break;
				
			case 2:
				// Exibe as regras do jogo
				mostrarRegras();
				break;
				
			case 3:
				// Sai do jogo
				printf("Saindo do jogo, ate logo!\n");
				break;
			
			default:
				// Trata Opções inválidas
				printf("Opcao invalida");
				break;
		}
	} while (opcao != 3); // Continua enquanto o usuário não escolher sair.
	
	return 0;
	
}
