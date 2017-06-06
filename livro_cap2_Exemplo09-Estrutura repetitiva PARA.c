// Le varios valores, calcula e escreve a media.

#include <stdio.h>
#include <conio.c>

main() {
	float valor, soma=0, media;
	int cont;
	char resp='S';
	
	for(cont=0;resp!='N' && resp!='n';cont++){
		clrscr();
		
		gotoxy(10,5);
		printf("Digite um valor: ");
		scanf("%f",&valor);
		
		soma=soma+valor;
		
		gotoxy(10,7);
		printf("Digite continuar? S/N");
		resp=getche();
	}
	
	if(soma==0)
		media=0;
	else
		media=soma/cont;
	
	clrscr();
	
	gotoxy(10,5);
	printf("Media dos valores digitados: %.1f",media);
	
	getch();
}
