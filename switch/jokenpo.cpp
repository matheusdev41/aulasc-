#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
	int escolhaJogador, escolhaComputador, entrarSair;
	srand(time(0));
		
	do {
			
		printf("Jogo de Jokenpo\n");
		printf("Escolha uma opcao:\n");
		printf("1 - Pedra\n");
		printf("2 - Papel\n");
		printf("3 - Tesoura\n");
		printf("Escolha: ");
		scanf("%d", &escolhaJogador);
		
	 	escolhaComputador = rand() % 3 + 1;
	 	
	 	switch (escolhaJogador)
		{
	 	case 1:
			 printf("Jogador: Pedra\n");
			 break;
			 
		case 2:
			 printf("Jogador: Papel\n");
			 break;
		
		case 3:
			 printf("Jogador: Tesoura\n");
			 break; 
		
		default:
			printf("Opcao invalida");
			break;
		}
		
			switch (escolhaComputador)
		{
	 	case 1:
			 printf("Computador: Pedra\n");
			 break;
			 
		case 2:
			 printf("Computador: Papel\n");
			 break;
		
		case 3:
			 printf("Computador: Tesoura\n");
			 break; 
		}
		
		if(escolhaJogador == escolhaComputador) {
			printf("Empate");
		} else if  ((escolhaJogador == 1 && escolhaComputador == 3) || 
					(escolhaJogador == 2 && escolhaComputador == 1) ||
					(escolhaJogador == 3 && escolhaComputador == 2)) {
			printf("Voce venceu!\n");		
		} else if   ((escolhaJogador == 3 && escolhaComputador == 1) || 
					(escolhaJogador == 1 && escolhaComputador == 2) ||
					(escolhaJogador == 2 && escolhaComputador == 3)) {
			printf("Voce perdeu!\n");			
		}
		
		printf("-- MENU --\n");
		printf("1 - SAIR DO JOGO\n");
		printf("2 - COMECAR O JOGO\n");
		scanf("%d", &entrarSair);
		
	} while (entrarSair == 2);
	
	return 0;

}
