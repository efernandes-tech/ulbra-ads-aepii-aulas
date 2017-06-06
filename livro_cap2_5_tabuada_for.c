// Ler um valor inteiro, entre 1 e 10, e escrever a sua tabuada.

#include <stdio.h>
#include <conio.c>

main() {
	int valor, cont;

	clrscr();
	gotoxy(10,5);
	printf("Digite um valor: ");
	scanf("%i",&valor);

	if(valor>=1 && valor<=10)
		for(cont=1;cont<=10;cont++){
			gotoxy(10,cont+7);
			printf("%i",cont*valor);
		}
	else{
		gotoxy(10,7);
		printf("Valor inválido.");
	}

	getch();
}
