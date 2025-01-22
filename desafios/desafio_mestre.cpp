#include <stdio.h>

// Variable definitions card 1
	int codcidade1;
	char nome1[30]; 
	int populacao1;
	float area1;
	float pib1;
	int nPontosTuristicos1;
	float densidade1;
	float percapta1;
	float superPoder1;
	
// Variable definitions card 2
	int codcidade2;
	char nome2[30]; 
	int populacao2;
	float area2;
	float pib2;
	int nPontosTuristicos2;
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
    scanf("%d", &populacao1); 
    
    printf("Digite a area da Cidade: \n");
    scanf("%f", &area1); 
    
    printf("Digite o pib da Cidade: \n"); 
    scanf("%f", &pib1); 
    
    printf("Digite o numero de pontos turisticos da Cidade: \n");
    scanf("%d", &nPontosTuristicos1);
}

// Card 2
void cadastroCarta2() {
	
    printf("-------------- Carta 2 --------------  \n"); // Cabeçalho para melhorar a exibição
    
    printf("Digite o codigo da cidade: \n"); // Instrução para usuário entrar com os dados
    scanf("%d", &codcidade2); // Leitura de dados solicitado
    
    printf("Digite o Nome da Cidade: \n"); 
    scanf("%s", &nome2); 
    
    printf("Digite a populacao da Cidade: \n"); 
    scanf("%d", &populacao2); 
    
    printf("Digite a area da Cidade: \n");
    scanf("%f", &area2); 
    
    printf("Digite o pib da Cidade: \n"); 
    scanf("%f", &pib2); 
    
    printf("Digite o numero de pontos turisticos da Cidade: \n");
    scanf("%d", &nPontosTuristicos2);
}

// Math Functions
// Função para divisão
float DIVIDIR(float x, float y){ 
	float result = x/y;
	return result;	
}

// Função para soma
float SOMA(float pop, float are, float pib, float ptr, float den, float per){
	float result = pop + are + pib + ptr + den + per;
	return result;
}

// Cards Comparison function
// Propriedade População
void comparaCartasPopulacao() {
	if (populacao1 > populacao2) {
		printf("Populacao: CARD UM VENCEDORA | card1 = %d > card2 = %d\n\n", populacao1, populacao2);
	} else if (populacao1 == populacao2) {
		printf("Populacao: EMPATE | card1 = %d = card2 = %d\n\n", populacao1, populacao2);
	} else {
		printf("Populacao:  CARD DOIS VENCEDORA | card1 = %d < card2 = %d\n\n", populacao1, populacao2);
	}
}

// Propriedade Área
void comparaCartasArea() {
	if (area1 > area2) {
		printf("Area: CARD UM VENCEDORA | card1 = %.2f > card2 = %.2f\n\n", area1, area2);
	} else if (area1 == area2) {
		printf("Area: EMPATE | card1 = %f.2 = card2 = %f.2\n\n", area1, area2);
	} else {
		printf("Area: CARD DOIS VENCEDORA  | card1 = %.2f < card2 = %.2f\n\n", area1, area2);
	}
}

// Propriedade PIB
void comparaCartasPib() {
	if (pib1 > pib2) {
		printf("Pib: CARD UM VENCEDORA | card1 = %.2f > card2 = %.2f\n\n", pib1, pib2);
	} else if (pib1 == pib2) {
		printf("Pib: EMPATE | card1 = %.2f = card2 = %.2f\n\n", pib1, pib2);
	} else {
		printf("Pib: CARD DOIS VENCEDORA  | card1 = %.2f < card2 = %.2f\n\n", pib1, pib2);
	}
}

// Propriedade número de pontos turisticos
void comparaCartasPturisticos() {
	if (nPontosTuristicos1 > nPontosTuristicos2) {
		printf("Pontos turisticos: CARD UM VENCEDORA | card1 = %d > card2 = %d\n\n", nPontosTuristicos1, nPontosTuristicos2);
	} else if (nPontosTuristicos1 == nPontosTuristicos2) {
		printf("Pontos turisticos: EMPATE | card1 = %d = card2 = %d\n\n", nPontosTuristicos1, nPontosTuristicos2);
	} else {
		printf("Pontos turisticos:  CARD DOIS VENCEDORA | card1 = %d < card2 = %d\n\n", nPontosTuristicos1, nPontosTuristicos2);
	}
}

// Propriedade densidade
void comparaCartasDensidade() {
	if (densidade1 < densidade2) {
		printf("Densidade: CARD UM VENCEDORA | card1 = %.2lf < card2 = %.2lf\n\n", densidade1, densidade2);
	} else if (densidade1 == densidade2) {
		printf("Densidade: EMPATE | card1 = %.2f = card2 = %.2f\n\n", densidade1, densidade2);
	} else {
		printf("Densidade: CARD DOIS VENCEDORA | card1 = %.2f > card2 = %.2f\n\n", densidade1, densidade2);
	}
}

// Propriedade PIB per capta
void comparaCartasPercapta() {
	if (percapta1 > percapta2) {
		printf("Pib per capta: CARD UM VENCEDORA | card1 = %lf > card2 = %lf\n\n", percapta1, percapta2);
	} else if (percapta1 == percapta2) {
		printf("Pib per capta: EMPATE | card1 = %lf = card2 = %lf\n\n", percapta1, percapta2);
	} else {
		printf("Pib per capta: CARD DOIS VENCEDORA | card1 = %lf < card2 = %lf\n\n", percapta1, percapta2);
	}
}

// Propriedade SUPER PODER
void comparaCartasSuperPoder() {
	if (superPoder1 > superPoder2) {
		printf("Super Poder: CARD UM VENCEDORA | card1 = %.2f > card2 = %.2f\n\n", superPoder1, superPoder2);
	} else if (superPoder1 == superPoder2) {
		printf("Super Poder: EMPATE | card1 = %.2f = card2 = %.2f\n\n", superPoder1, superPoder2);
	} else {
		printf("Super Poder:  CARD DOIS VENCEDORA | card1 = %.2f > card2 = %.2f\n\n", superPoder1, superPoder2);
	}
}

// Display funcions
// Card 1
void  exibirCartaUM(){ 
	printf("-------------- Card 1 --------------  \n");
	printf("\nCodigo da cidade: %d\n", codcidade1 );
	printf("Nome da cidade: %s\n", nome1 );
	printf("Populacao da cidade: %d\n", populacao1 );
	printf("Area da cidade: %.2f\n", area1 );
	printf("Pib da cidade: %.2f\n", pib1 );
	printf("Numero de pontos turisticos da cidade1: %d\n\n", nPontosTuristicos1);
	
	printf("Densidade: %.2f\n\n", densidade1);
	printf("PIB per Capita: %lf\n", percapta1);
	
	printf("Super poder: %lf\n\n", superPoder1);

}

// Card 2
void exibirCartaDOIS(){ // Function para exibir Carta2:
	printf("-------------- Card 2 --------------  \n");
	printf("\nCodigo da cidade: %d\n", codcidade2 );
	printf("Nome da cidade: %s\n", nome2 );
	printf("Populacao da cidade: %d\n", populacao2 );
	printf("Area da cidade: %.2f\n", area2 );
	printf("Pib da cidade: %.2f\n", pib2 );
	printf("Numero de pontos turisticos da cidade2: %d\n\n", nPontosTuristicos2);
	
	printf("Densidade: %.2f\n\n", densidade2);
	printf("PIB per Capita: %lf\n", percapta2);
	
	printf("Super poder: %lf\n\n", superPoder2);
	
}

int main() {
    printf("Desafio Cartas Super Trunfo \n\n"); // Cabeçalho do jogo
    
    printf("Cadastro de cartas: \n\n");
   	cadastroCarta1();
   	cadastroCarta2();
    
    
    // Propriedades calculáveis das cartas
    densidade1 = DIVIDIR(populacao1, area1);
    percapta1 = DIVIDIR(pib1, populacao1);
    
    densidade2 = DIVIDIR(populacao2, area2);
    percapta2 = DIVIDIR(pib2, populacao2);
    
    superPoder1 = SOMA(populacao1, area1, pib1, nPontosTuristicos1, densidade1, percapta1);
    superPoder2 = SOMA(populacao2, area2, pib2, nPontosTuristicos2, densidade2, percapta2);
    
    // Exibição dos Dados das Cartas:
    
	exibirCartaUM();
	exibirCartaDOIS();
	
	// Exibição de resultado das comparações de propriedades: 
	printf("-------------- RESULTADO --------------  \n\n");
	
	comparaCartasPopulacao();
	comparaCartasArea();
	comparaCartasPib();
	comparaCartasPturisticos();
	comparaCartasDensidade();
 	comparaCartasPercapta();
	comparaCartasSuperPoder();
	
    return 0;
}
