/*
Ler uma matriz 4x5;
calcule e mostre qtd pares,
soma dos impares e
a media de todos os elementos.
*/

#include <stdio.h>
#include <conio.c>

main() {
	int matriz[4][5], l, c;
	int par = 0;
	int soma = 0;
	float total = 0;
	float media = 0;

	clrscr();

	gotoxy(5,3);
	printf("Matriz 4x5:");

	for (l=0;l<4;l++) {
		for (c=0;c<5;c++) {
			gotoxy(5+c*5,5+l*2);
			scanf("%i",&matriz[l][c]);
			if (matriz[l][c] % 2 == 0) {
				par++;
			} else {
				soma = soma + matriz[l][c];
			}
			total = total + matriz[l][c];
		}
	}
	
	media = total/20.0;

	gotoxy(5,15);
	printf("Par %i", par);
	gotoxy(5,17);
	printf("Soma %i", soma);
	gotoxy(5,19);
	printf("Media %.2f", media);

	getch();
}
