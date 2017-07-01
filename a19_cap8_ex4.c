// exercicio 4 cap 8
// passagem de parametro por referencia

#include<stdio.h>
#include<conio.c>

int compara(char *s1,char *s2);

main(){
	char str1[15], str2[15];
	int retorno;

	clrscr();
	gotoxy(5,3); printf("String 1: ");
	gotoxy(5,5); printf("String 2: ");
	gotoxy(15,3); fflush(stdin); fgets(str1,15,stdin);
	gotoxy(15,5); fflush(stdin); fgets(str2,15,stdin);

	retorno=compara(str1,str2);

	gotoxy(5,8);
	if(retorno==-1)
		printf("Strings IGUAIS!!!");
	else
		printf("Strings DIFERENTES, posicao da primeira letra diferente = %i",retorno+1);

	getch();
}

int compara(char *s1,char *s2) {
	int i,posicao=-1;
	for(i=0;*s1 != '\0' && *s1 != '\0' && posicao ==-1;i++) {
		if(*s1 != *s2)
			posicao=i;
		s1++;
		s2++;
	}
	return posicao;
}
