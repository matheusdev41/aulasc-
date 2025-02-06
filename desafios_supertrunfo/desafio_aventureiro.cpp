#include <stdio.h>


float DIVIDIR(float x, float y){ // Função de divisão para reaproveitamento de código
	float result = x/y;
	return result;
	
}


int main() {
    printf("Desafio Cartas Super Trunfo \n"); // Cabeçalho do jogo
    
    //Definição de variáveis
    
	int codcidade;
	char nome[30]; 
    int populacao;
    float area;
    float pib;
    int npontosturisticos;
    float densidade;
	float percapta;
    
    // Cadastro das Cartas:
    
    printf("---- Cadastro de cartas ---- \n"); // Cabeçalho para melhorar a exibição
    
    printf("Digite o codigo da cidade: \n"); // Instrução para usuário entrar com os dados
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
    
    // Exibição dos Dados das Cartas:
    
    printf("----------------- CITY CARD ----------------- \n"); // Cabeçalho para melhorar a exibição
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
