#include <stdio.h>

// convers�o implicita (for�ada)
// podem ocorrer perca de dados

int main() {
	int a = 10;
	float b = 3.5;
	float resultado = a + b;
	
	printf("Resultado: %.2f\n", resultado);
	return 0;
}
