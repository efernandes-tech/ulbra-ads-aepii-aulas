// exercicio 3 capitulo 8
// passagem de parametro por referencia (com ponteiros)

#include<stdio.h>
#include<conio.c>

void primo(int *ptr);

main() {
	int valor;
	
	clrscr();
	gotoxy(5,5);
	printf("Digite um valor: ");
	scanf("%i",&valor);

	// passa o endereco de memoria.
	primo(&valor);
	
	gotoxy(5,7);
	if(valor==1)
		printf("Primo!");
	else
		printf("Nao e primo!");
	
	getch();
}

void primo(int *ptr) {
	int x, cont=0;
	
	for(x=1;x < *ptr;x++) {
		if(*ptr % x == 0)
			cont++;
	}
	
	if (cont==2)
		*ptr=1;
	else
		*ptr=0;
}
