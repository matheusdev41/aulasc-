#include <stdio.h>

// Variable definitions card 1
	int codcidade1;
	char nome1[30]; 
	float populacao1;
	float area1;
	float pib1;
	float nPontosTuristicos1;
	float densidade1;
	float percapta1;
	float superPoder1;
	
// Variable definitions card 2
	int codcidade2;
	char nome2[30]; 
	float populacao2;
	float area2;
	float pib2;
	float nPontosTuristicos2;
	float densidade2;
	float percapta2;
	float superPoder2;
	
// Registration functions Cards:
// Card 1
void cadastroCarta1() { 

    printf("-------------- Carta 1 --------------  \n"); // Cabeçalho para melhorar a exibição
    
    printf("Digite o codigo da cidade: \n"); // Instrução para usuário entrar com os dados
    scanf("%d", &codcidade1); // Leitura de dados solicitado
    
    printf("Digite o Nome da Cidade: \n"); 
    scanf("%s", &nome1); 
    
    printf("Digite a populacao da Cidade: \n"); 
    scanf("%f", &populacao1); 
    
    printf("Digite a area da Cidade: \n");
    scanf("%f", &area1); 
    
    printf("Digite o pib da Cidade: \n"); 
    scanf("%f", &pib1); 
    
    printf("Digite o numero de pontos turisticos da Cidade: \n");
    scanf("%f", &nPontosTuristicos1);
}

// Card 2
void cadastroCarta2() {
	
    printf("-------------- Carta 2 --------------  \n"); // Cabeçalho para melhorar a exibição
    
    printf("Digite o codigo da cidade: \n"); // Instrução para usuário entrar com os dados
    scanf("%d", &codcidade2); // Leitura de dados solicitado
    
    printf("Digite o Nome da Cidade: \n"); 
    scanf("%s", &nome2); 
    
    printf("Digite a populacao da Cidade: \n"); 
    scanf("%f", &populacao2); 
    
    printf("Digite a area da Cidade: \n");
    scanf("%f", &area2); 
    
    printf("Digite o pib da Cidade: \n"); 
    scanf("%f", &pib2); 
    
    printf("Digite o numero de pontos turisticos da Cidade: \n");
    scanf("%f", &nPontosTuristicos2);
}

// Função para calcular propriedades densidade e pib per capta
 float calculaPropriedade(float populacao, float area){ 
	if (area == 0) {
		printf("Erro, a divisão por zero nao e permitida");
		return 0;
	}
	float result = populacao/area;
	return result;	
}

// Função para calcular super poder
float calculaSuperPoder(float pop, float are, float pib, float ptr, float den, float per){
	float result = pop + are + pib + ptr + den + per;
	return result;
}

// Cards Comparison function

// Propriedade densidade
void comparaCartasDensidade(float prop1, float prop2, const char *nomePropriedade) {
	if (densidade1 < densidade2) {
		printf("Densidade: CARD UM VENCEDORA | card1 = %f < card2 = %f\n\n", densidade1, densidade2);
	} else if (densidade1 == densidade2) {
		printf("Densidade: EMPATE | card1 = %f = card2 = %f\n\n", densidade1, densidade2);
	} else {
		printf("Densidade: CARD DOIS VENCEDORA | card1 = %f > card2 = %f\n\n", densidade1, densidade2);
	}
}

// Outras Propriedades
void comparaCartas(float prop1, float prop2, const char *nomePropriedade) {
	if (prop1 > prop2) {
		printf("%s : CARD UM VENCEDORA | card1 = %.2f > card2 = %.2f\n\n", nomePropriedade, prop1, prop2);
	} else if (prop1 == prop2) {
		printf("%s : EMPATE | card1 = %.2f < card2 = %.2f\n\n", nomePropriedade, prop1, prop2);
	} else {
		printf("%s : CARD DOIS VENCEDORA | card1 = %.2f < card2 = %.2f\n\n", nomePropriedade, prop1, prop2);
	}
}



// Display funcions
// Card 1
void  exibirCartaUM(){ 
	printf("-------------- Card 1 --------------  \n");
	printf("\nCodigo da cidade: %d\n", codcidade1 );
	printf("Nome da cidade: %s\n", nome1 );
	printf("Populacao da cidade: %.2f\n", populacao1 );
	printf("Area da cidade: %.2f\n", area1 );
	printf("Pib da cidade: %.2f\n", pib1 );
	printf("Numero de pontos turisticos da cidade1: %.2f\n\n", nPontosTuristicos1);
	
	printf("Densidade: %.2f\n\n", densidade1);
	printf("PIB per Capita: %.2f\n", percapta1);
	
	printf("Super poder: %.2f\n\n", superPoder1);

}

// Card 2
void exibirCartaDOIS(){ 
	printf("-------------- Card 2 --------------  \n");
	printf("\nCodigo da cidade: %d\n", codcidade2 );
	printf("Nome da cidade: %s\n", nome2 );
	printf("Populacao da cidade: %.2f\n", populacao2 );
	printf("Area da cidade: %.2f\n", area2 );
	printf("Pib da cidade: %.2f\n", pib2 );
	printf("Numero de pontos turisticos da cidade2: %.2f\n\n", nPontosTuristicos2);
	
	printf("Densidade: %.2f\n\n", densidade2);
	printf("PIB per Capita: %.2f\n", percapta2);
	
	printf("Super poder: %.2f\n\n", superPoder2);
	
}

int main() {
	
	int escolha;
	
	// Cadastro de cartas
    printf("Cadastro de cartas: \n\n");
   	cadastroCarta1();
   	cadastroCarta2();
	
	// Propriedades calculáveis das cartas
    densidade1 = calculaPropriedade(populacao1, area1);
    percapta1 = calculaPropriedade(pib1, populacao1);
    
    densidade2 = calculaPropriedade(populacao2, area2);
    percapta2 = calculaPropriedade(pib2, populacao2);
    
    superPoder1 = calculaSuperPoder(populacao1, area1, pib1, nPontosTuristicos1, densidade1, percapta1);
    superPoder2 = calculaSuperPoder(populacao2, area2, pib2, nPontosTuristicos2, densidade2, percapta2);
    
	
	// Cabeçalho do jogo
    printf("Desafio Cartas Super Trunfo \n\n"); 

    
    // Exibição dos Dados das Cartas:
	exibirCartaUM();
	exibirCartaDOIS();
	
	// Escolha de propriedades a serem comparadas
	printf("Escolha a propriedade a ser comparada:\n"
	"[1] - Populacao\n"
	"[2] - Area\n"
	"[3] - Pib\n"
	"[4] - Pontos Turisticos\n"
	"[5] - Densidade\n"
	"[6] - Pib per capta\n"
	"[7] - Super Poder\n");
	
	scanf("%d", &escolha);
	
	// Validação de escolha do usuário
    if (escolha >=1 && escolha <= 7 ){
	
		// Exibição de resultado das comparações de propriedades 
		printf("-------------- RESULTADO --------------  \n\n");
		
		// Escolha da comparação de propriedades
		switch (escolha) {
			case 1: comparaCartas(populacao1, populacao2, "Populacao"); break;
			case 2: comparaCartas(area1, area2, "Area"); break;
			case 3: comparaCartas(pib1, pib2, "PIB"); break;
			case 4: comparaCartas(nPontosTuristicos1, nPontosTuristicos2, "Pontos Turisticos"); break;
			case 5: comparaCartasDensidade(densidade1, densidade2, "Densidade"); break;
			case 6: comparaCartas(percapta1, percapta2, "PIB per capta"); break;
			case 7: comparaCartas(superPoder1, superPoder2, "Super Poder"); break;
		}
		
	} else {
		printf("ERRO! Opcao invalida");
		return 1;
	}
    return 0;
}
