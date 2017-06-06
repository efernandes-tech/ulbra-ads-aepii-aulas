// Ler 25 valores, calcular e escrever o percentual de valores negativos.

#include <stdio.h>
#include <conio.c>

main() {
	int cont;
	float valor, negativo, perc;

	cont = 0;
	negativo = 0;
	
	do{
		clrscr();
		gotoxy(10,10);
		printf("Digite um valor:");
		scanf("%f",&valor);

		cont = cont + 1;
	
		if(valor < 0)
			negativo = negativo + 1;
	} while(cont<25);
	
	perc = (negativo*100)/25;
	gotoxy(10,14);
	printf("%% negativos= %.2f",perc);
	
	getch();
}
