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

// Math Functions
float DIVIDIR(float x, float y){ 
	float result = x/y;
	return result;	
}

float SOMA(float pop, float are, float pib, float ptr, float den, float per){
	float result = pop + are + pib + ptr + den + per;
	return result;
}


// Registration functions Cards:
// Card 1
float cadastroCarta1() { 

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
float cadastroCarta2() {
	
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

// Display funcions
// Card 1
int  exibirCartaUM(){ 
	printf("-------------- Card 1 --------------  \n");
	printf("\nCodigo da cidade: %d\n", codcidade1 );
	printf("Nome da cidade: %s\n", nome1 );
	printf("Populacao da cidade: %d\n", populacao1 );
	printf("Area da cidade: %.2f\n", area1 );
	printf("Pib da cidade: %.2f\n", pib1 );
	printf("Numero de pontos turisticos da cidade1: %d\n\n", nPontosTuristicos1);
	
	printf("Densidade: %.2f\n\n", densidade1);
	printf("PIB per Capita: %.2f\n", percapta1);
	
	printf("Super poder: %.2f\n\n", superPoder1);

}

// Card 2
int exibirCartaDOIS(){ // Function para exibir Carta2:
	printf("-------------- Card 2 --------------  \n");
	printf("\nCodigo da cidade: %d\n", codcidade2 );
	printf("Nome da cidade: %s\n", nome2 );
	printf("Populacao da cidade: %d\n", populacao2 );
	printf("Area da cidade: %.2f\n", area2 );
	printf("Pib da cidade: %.2f\n", pib2 );
	printf("Numero de pontos turisticos da cidade2: %d\n\n", nPontosTuristicos2);
	
	printf("Densidade: %.2f\n\n", densidade2);
	printf("PIB per Capita: %.2f\n", percapta2);
	
	printf("Super poder: %.2f\n\n", superPoder2);
	
}

int main() {
    printf("Desafio Cartas Super Trunfo \n\n"); // Cabeçalho do jogo
    
    printf("Cadastro de cartas: \n\n");
   	float carta1 = cadastroCarta1();
   	float carta2 = cadastroCarta2();
    
    
    // Propriedades calculáveis das cartas
    densidade1 = DIVIDIR(populacao1, area1);
    percapta1 = DIVIDIR(pib1, populacao1);
    
    densidade2 = DIVIDIR(populacao2, area2);
    percapta2 = DIVIDIR(pib2, populacao2);
    
    superPoder1 = SOMA(populacao1, area1, pib1, nPontosTuristicos1, densidade1, percapta1);
    superPoder2 = SOMA(populacao2, area2, pib2, nPontosTuristicos2, densidade2, percapta2);
    
    // Exibição dos Dados das Cartas:
    
	int exibirCarta1 = exibirCartaUM();
	int exibirCarta2 = exibirCartaDOIS(); 
	
    return 0;
}
