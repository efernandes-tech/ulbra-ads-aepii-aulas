/*
Ler uma matriz 4x4 de caracteres,
trocar os elementos da coluna 1 com a 4 e
escrever a matriz modificada.
*/

#include <stdio.h>
#include <conio.c>

main() {
	char matriz[4][4];
	char aux;
	int l, c;
	
	clrscr(); // Limpa a tela.
	
	gotoxy(5,3);
	printf("Matriz 4x4 de caracteres:");
	
	// Entrada de dados.
	for (l=0;l<4;l++) {
		for (c=0;c<4;c++) {
			gotoxy(5+c*5,5+l*2);
			matriz[l][c] = getch();
			printf("%c",matriz[l][c]);
		}
	}
	
	// Processamento.
	for (l=0;l<4;l++) {
		aux = matriz[l][0];
		matriz[l][0] = matriz[l][3];
		matriz[l][3] = aux;
	}
	
	// Saída de dados.
	for (l=0;l<4;l++) {
		for (c=0;c<4;c++) {
			gotoxy(5+c*5,15+l*2);
			printf("%c",matriz[l][c]);
		}
	}

	getch();
}
