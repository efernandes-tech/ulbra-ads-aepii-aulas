#include <stdio.h>
#include <conio.c>

main() {
	int valor;
	
	clrscr();
	
	gotoxy(10,10);
	printf("Digite um valor:");
	scanf("%i",&valor);

	gotoxy(10,14);
	if(valor%2==0)
		printf("%i e par.",valor);
	else
		printf("%i e impar.",valor);

	getch();
}
