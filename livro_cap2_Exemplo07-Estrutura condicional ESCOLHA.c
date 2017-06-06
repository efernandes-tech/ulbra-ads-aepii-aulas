/*
Le o codigo de um produto e a quantidade adquirida,
calcula e escreve o total a ser pago pelo cliente.
1 torrada 4.90 | 2 xis 8.00 | 3 suco 3.50 | 4 agua 2.50
*/

#include <stdio.h>
#include <conio.c>

main() {
	int cod, qtde;
	
	clrscr();
	
	gotoxy(10,5); 	printf("Codigo Produto   Valor");
	gotoxy(10,6); 	printf("  1    Torrada   4.90");
	gotoxy(10,7); 	printf("  2    Xis       8.00");
	gotoxy(10,8); 	printf("  3    Suco      3.50");
	gotoxy(10,9); 	printf("  4    Agua      2.50");
	gotoxy(10,11); 	printf("Codigo do produto..: ");
	gotoxy(10,12); 	printf("Quantidade.........: ");
	gotoxy(33,11); 	scanf("%i",&cod);
	gotoxy(33,12); 	scanf("%i",&qtde);
	
	gotoxy(10,14);
	switch(cod) {
		case 1:
			printf("Total a pagar = R$ %.2f",qtde*4.9);
			break;
		case 2:
			printf("Total a pagar = R$ %.2f",qtde*8.0);
			break;
		case 3:
			printf("Total a pagar = R$ %.2f",qtde*3.5);
			break;
		case 4:
			printf("Total a pagar = R$ %.2f",qtde*2.5);
			break;
		default:
			printf("Codigo invalido!");
			break;
	}
	
	getch();
}
