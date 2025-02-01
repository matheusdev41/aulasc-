#include <stdio.h>

int main() {
	int temperatura = 40;
	int resultado;
	
	resultado = temperatura > 30 ? 1 : 0;
	
	if (resultado == 1) {
		printf("Esta calor");
	} else {
		printf("Esta frio");
	}
	
	return 0;
}
