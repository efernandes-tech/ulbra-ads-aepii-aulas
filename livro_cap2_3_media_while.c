// Ler 10 valores do tipo inteiro, calcular e escrever a media desses valores.

#include <stdio.h>
#include <conio.c>

main() {
	int valor, soma, cont;
	float media;

	cont = 0;
	soma = 0;
	
	while(cont<10){
		clrscr();
		gotoxy(10,10);
		printf("Digite um valor:");
		scanf("%i",&valor);

		cont = cont + 1;
		soma = soma + valor;
	}
	
	media = soma / 10;
	
	gotoxy(10,14);
	printf("Media  =  %.2f",media);
	
	getch();
}
