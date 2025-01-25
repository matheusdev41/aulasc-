#include <stdio.h>

void verificaNota(float n){
	if( n >= 90 ){
		printf("Categoria A");
	} else if ( n >= 80 && n <= 90 ) {
		printf("Categoria B");
	} else if ( n >= 70 && n <= 80) {
		printf("Categoria C");
	} else if ( n >= 60 && n <= 70) {
		printf("Categoria D");
	} else {
		printf("Categoria F");
	}
	
}

int main() {
	float nota;
	
	printf("Entre com a nota: \n");
	scanf("%f", &nota);
	
	verificaNota(nota);
	
	return 0;
}
