// A primeira condi��o idade do usu�rio est� entre 18 e 65 anos.
// A segunda condi��o se a renda do usu�rio � menor que 3000.
// A terceira condi��o verifica se o n�mero de dependentes � maior que 2.

int main() {
	int idade;
	float renda;
	int dependentes;
	
	printf("Entre com a idade: \n");
	scanf("%d", &idade);
	
	if ( idade >= 18 && idade <= 65){
		
		printf("Entre com a renda: \n");
		scanf("%f", &renda);
		
		if (renda < 3000){
			
			if (dependentes > 2 ){
				
			} else {
				printf("NAO QUALIFICADO, NUMERO DE DEPENDENTES NAO ATENDE AOS REQUISITOS");
			}
			
		} else {
			printf("N�O QUALIFICADO, RENDA NAO ATENDE AOS REQUISITOS");
		}
		
	} else {
		printf("NAO QUALIFICADO, IDADE NAO ATENDE AOS REQUISITOS");
	}
}
