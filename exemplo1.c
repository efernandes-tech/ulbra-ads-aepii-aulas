// exemplo de funcao com passagem de parametro por valor
// capitulo 8

#include <stdio.h>
#include <conio.c>

int valida_data(int d, int m, int a);

main() {
	int dia, mes, ano, retorno;

	do{
		clrscr();
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

		getch();
	} while(retorno!=1);
}

int valida_data(int d, int m, int a) {
	int eh_valida;

	if(a > 0)
		if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d>=1 && d<=31)
			eh_valida=1; // data correta
		else
			if((m==4 || m==6 || m==9 || m==11) && d>=1 && d<=30)
				eh_valida=1; // data correta
			else
				if(m==2 && d>=1 && d<=28)
					eh_valida=1; // data correta
				else
					if(m==2 && a%4==0 && d>=1 && d<=29)
						eh_valida=1; // data correta
					else
						eh_valida=0; // data incorreta
	else
		eh_valida=0; // data incorreta

	return eh_valida;
}
