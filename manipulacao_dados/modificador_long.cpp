#include <stdio.h>

int main() {
	int numeroNormal = 2147483647; // Valor m�ximo de int
	long int numeroGrande = 2147483647;
	
	printf("N�mero regular (int): %d\n", numeroNormal);
	printf("N�mero grande (long int): %ld\n", numeroGrande);
	
	numeroGrande = 2147483643; // Valor maior que o m�ximo de int
	printf("N�mero grande atualizado (long int): %ld\n", numeroGrande);
	
	return 0;
}
