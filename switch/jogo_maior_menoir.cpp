#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Fun��o para exibir o menu inicial
void menuInicial(int *escolhaInicio){
	printf("-- MENU DO JOGO --\n");
	printf("1 - Iniciar jogo\n");
	printf("2 - Exibir Regras\n");
	printf("3 - Sair\n");
	printf("Escolha uma opcao: ");
	scanf("%d", escolhaInicio);
}

// Fun��o para exibir as regras 	
void exibirRegras(){
	printf("\n-- REGRAS DO JOGO --\n");
    printf("1. Você deve cadastrar um n�mero.\n");
    printf("2. O computador ir� gerar um n�mero aleat�rio.\n");
    printf("3. Fa�a sua aposta se seu n�mero � maior, menor ou igual ao do computador.\n");
    printf("4. Se acertar, voc� vence. Caso contr�rio, perde.\n");
} 	

// Funçao para o jogador cadastrar um n�mero
int cadastroNumero() {
	int numero;
	printf("-- BEM VINDO --\n");
	printf("Para começar o jogo...\n");
	printf("Cadastre seu numero: ");
	scanf("%d", &numero);
	return numero;
}

// Fun��o para verificar o resultado da aposta
void resultadoFinal(int nJogador, int nComputador){
	int aposta, resultado;
		
	printf("Agora fa�a sua aposta!\n");
	printf("Seu numero e...\n");
		
	printf("1 - Maior que o do computador?\n");
	printf("2 - Menor que o do computador?\n");
	printf("3 - Igual a do computador?\n");
	scanf("%d", &aposta);
		
	switch(aposta){
		case 1: 
			resultado =	nJogador > nComputador;	
			printf("Voce apostou que seu numero e maior!...\n");			
			break;	
		case 2:
			resultado =	nJogador < nComputador;
			printf("Voce apostou que seu numero e menor!...\n");
			break;
			
		case 3:
			resultado =	nJogador == nComputador;
			printf("Voce apostou que seu numero e igual!...\n");
			break;
		default:
			printf("Opcao invalida!\n");
			return;	
	}
	
	printf("Numero do computador: %d\n", nComputador);
	printf("Numero do jogador: %d\n", nJogador);
	
	if (resultado) {
		printf("Voce venceu!\n");
	} else {
		printf("Voce perdeu!\n");
	}
}


int main(){
	int numeroJogador, escolhaInicial, numeroComputador;
	srand(time(NULL)); // Inicializa o gerador de n�meros aleat�rios
	
			
	do {
		menuInicial(&escolhaInicial);
		
		switch(escolhaInicial){
			case 1:
				numeroJogador = cadastroNumero();
				numeroComputador = rand() %100 +1; 
				resultadoFinal(numeroJogador, numeroComputador);
				
				break;
				
			case 2: 
				exibirRegras();
				break;
				
			case 3:
				printf("Saindo do jogo\n");
				printf("Ate logo!");
				break;
				
			default:
				printf("Opcao invalida\n");
		}
	
		
	} while (escolhaInicial != 3);
	
	return 0;
}
