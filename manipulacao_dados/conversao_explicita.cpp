#include <stdio.h>

int main() {
	int a = 10;
	int b = 3;
	float quociente = (float) a / b; // 'a' � explicitamente convertido para float (casting) 
	
	printf("Quociente: %.2f\n", quociente);
	
	return 0;
}
