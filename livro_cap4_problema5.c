/*
Ler repetidamente uma string.
Mostrar o seu tamanho.
Ate que o valor digitado seja 'FIM'.
Mostrar total de strings digitadas.
Mostrar total de caracteres digitados, menos do 'FIM'.
Usar a funcao scanf().
*/

#include <stdio.h>
#include <conio.c>
#include <string.h>

main() {
	char palavra[50];
	int i = 0, cont = 0, caracteres = 0;
	
	clrscr();
	do {
		gotoxy(4,2+i);
		printf("Digite algo ou \"fim\": ");
		// gets(palavra);
		scanf("%s",palavra);
		if (!stricmp(palavra,"fim")) {
			break;
		} else {
			cont++;
			caracteres += strlen(palavra);
			gotoxy(4,4+i);
			printf("Tamanho do texto: %i",strlen(palavra));
		}
		i+=4;
	} while (stricmp(palavra, "fim")); // Compara strings sem considerar diff minuscculas. Se não usar "strcmp()".
	
	gotoxy(4,4+i);
	printf("Foi digitado %i string(s).",cont);
	gotoxy(4,6+i);
	printf("Foi digitado %i caracteres.",caracteres);
	gotoxy(4,8+i);
	printf("FIM!");
	getch();
}
