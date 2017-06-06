// Le um valor e verifica se ele e positivo, negativo ou nulo.

#include<stdio.h>
#include<conio.c>

main() {
	int valor;
	
	clrscr();
	
	gotoxy(5,5);
	printf("Digite um valor inteiro: ");
	scanf("%i", &valor);
	
	gotoxy(5,8);
	if(valor>0)
		printf("Positivo!");
	else
		if(valor<0)
			printf("Negativo!");
		else
			printf("Nulo!");
	
	getch();
}
