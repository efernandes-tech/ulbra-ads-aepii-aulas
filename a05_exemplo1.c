// Main retorna um int 0 para nao gerar erro e alguns compiladores.

#include<stdio.h>

int main(void) {
	float valor1 = 136.472;
	printf("\n %f", valor1);
	printf("\n %8.1f", valor1);
	printf("\n %08.1f", valor1);
	printf("\n %-8.1f", valor1);
	
	int valor2 = 790;
	printf("\n %i", valor2);
	printf("\n %5i", valor2);
	printf("\n %05i", valor2);
	printf("\n %-5i", valor2);
	
	printf("\n O total é %2i.", 350);
	printf("\n O total é %4i.", 350);
	printf("\n O total é %5i.", 350);

	return 0;
}
