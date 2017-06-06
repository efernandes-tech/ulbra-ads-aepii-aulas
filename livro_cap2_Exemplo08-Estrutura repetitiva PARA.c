// Le varios valores (zero encerra a entrada) e calcula a media.

#include <stdio.h>
#include <conio.c>

main() {
	float valor, soma=0, media;
	int cont;
	
	clrscr();
	
	gotoxy(10,5);
	printf("Digite um valor (zero para sair): ");
	scanf("%f",&valor);
	
	for(cont=0;valor!=0;cont++) {
		soma=soma+valor;
		clrscr();
		gotoxy(10,5);
		printf("Digite um valor (zero para sair): ");
		scanf("%f",&valor);
	}
	
	if(soma==0)
		media=0;
	else
		media=soma/cont;
		
	gotoxy(10,7);
	printf("Media dos valores digitados: %.1f",media);
	
	getch();
}
