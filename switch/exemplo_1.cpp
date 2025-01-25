#include <stdio.h>

int main() {
	
	int opcao;
	float saldo = 1000;
	float saque;
	
	printf("Escolha uma opcao: \n");
	printf("[1] - Verificar saldo \n");
	printf("[2] - Fazer deposito \n");
	printf("[3] - Fazer saque \n");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1 : 
		printf("O seu saldo é : R$ %f \n", saldo); 
		break;
		
		case 2 : 
		printf("Digite o valor do deposito: \n");
		scanf("%f", &)
	}
	
	return 0;
}
