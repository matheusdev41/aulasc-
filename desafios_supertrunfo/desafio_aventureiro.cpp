#include <stdio.h>


float DIVIDIR(float x, float y){ // Fun��o de divis�o para reaproveitamento de c�digo
	float result = x/y;
	return result;
	
}


int main() {
    printf("Desafio Cartas Super Trunfo \n"); // Cabe�alho do jogo
    
    //Defini��o de vari�veis
    
	int codcidade;
	char nome[30]; 
    int populacao;
    float area;
    float pib;
    int npontosturisticos;
    float densidade;
	float percapta;
    
    // Cadastro das Cartas:
    
    printf("---- Cadastro de cartas ---- \n"); // Cabe�alho para melhorar a exibi��o
    
    printf("Digite o codigo da cidade: \n"); // Instru��o para usu�rio entrar com os dados
    scanf("%d", &codcidade); // Leitura de dados solicitado
    
    printf("Digite o Nome da Cidade: \n"); 
    scanf("%s", &nome); 
    
    printf("Digite a populacao da Cidade: \n"); 
    scanf("%d", &populacao); 
    
    printf("Digite a area da Cidade: \n");
    scanf("%f", &area); 
    
    printf("Digite o pib da Cidade: \n"); 
    scanf("%f", &pib); 
    
    printf("Digite o numero de pontos turisticos da Cidade: \n");
    scanf("%d", &npontosturisticos);
    
    densidade = DIVIDIR(populacao, area);
    percapta = DIVIDIR(pib, populacao);
    
    // Exibi��o dos Dados das Cartas:
    
    printf("----------------- CITY CARD ----------------- \n"); // Cabe�alho para melhorar a exibi��o
    printf("Codigo da cidade: %d\n", codcidade );
	printf("Nome da cidade: %s\n", nome );
	printf("Populacao da cidade: %d\n", populacao );
	printf("Area da cidade: %.2f\n", area );
	printf("Pib da cidade: %.2f\n", pib );
	printf("Numero de pontos turisticos da cidade: %d\n\n", npontosturisticos );
	
	printf("Densidade: %.2f\n\n", densidade);
	printf("PIB per Capita: %.2f\n", percapta);
	
    return 0;
}
