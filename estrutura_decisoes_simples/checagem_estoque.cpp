#include <stdio.h>

float temperatura, umidade;
unsigned int estoque;
int estoqueMinimo = 1000;

void verificarUmidade(){
	printf("Entre com a UMIDADE: \n");
	scanf("%f, &umidade");
	
	if( umidade > 50 ){
		printf("Umidade elevada\n");
	} else {
		printf("A umidade esta dentro dos parametros\n");
	}
}

void verificarTemperatura(){
	printf("Entre com a TEMPERATURA EM GRAUS C:\n");
	scanf("%f", &temperatura);
	
	if (temperatura > 30){
		printf("A temperatura esta alta\n");
	} else {
		printf("A temperatura esta dentro dos parametros\n");
	}
}

void verificarEstoque(){
	printf("Entre com o estoque: \n");
	scanf("%d", &estoque);
	
	if(estoque > estoqueMinimo) {
		printf("Estoque esta dentro dos parametros");
	} else {
		printf("Estoque abaixo do minimo");
	}
}

int main (){
	printf("VERIFICACAO ARMAZEM\n\n");

	verificarUmidade();
	verificarTemperatura();
	verificarEstoque();
	
	return 0;
}
