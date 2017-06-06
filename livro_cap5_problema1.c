/*
Ler uma matriz 3x5 e
contar quantos valores estao no intervalo entre 15 e 20 inclusive.
*/

#include <stdio.h>
#include <conio.c>

main() {
	int m[3][5], l, c, cont=0;
	
	clrscr();
	
	gotoxy(5,3);
	printf("Matriz 3x5");
	for (l=0;l<3;l++) {
		for (c=0;c<5;c++) {
			// Começa na linha 5 pulando de 5 em 5.
			gotoxy(5+c*5,5+l*2);
			scanf("%i", &m[l][c]);
			if (m[l][c] >= 15 && m[l][c] <= 20)
				cont++;
		}
	}
	
	gotoxy(5,15);
	printf("Qtde de valores entre 15 e 20 = %i", cont);
	getch();
}
