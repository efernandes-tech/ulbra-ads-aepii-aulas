// exemplo de funcao com passagem de parametro por valor
// capitulo 8

#include <stdio.h>
#include <conio.c>
#include "a18_biblioteca.h"

main() {
	int dia, mes, ano, retorno;

	do{
		clrscr();

		desenha_bordas(5,75,5,20,14);

		gotoxy(10,8);  printf("Dia: ");
		gotoxy(10,9);  printf("Mes: ");
    	gotoxy(10,10); printf("Ano: ");

		gotoxy(15,8);  scanf("%i", &dia);
		gotoxy(15,9);  scanf("%i", &mes);
		gotoxy(15,10); scanf("%i", &ano);

		// funcao com passagem de parametro por valor
		retorno = valida_data(dia, mes, ano);

		gotoxy(10,12);
		if(retorno==1)
			printf("Data valida!");
		else
			printf("Erro!!! Digite algo para continuar...");

		fflush(stdin);

		getch();
	} while(retorno!=1);
}
