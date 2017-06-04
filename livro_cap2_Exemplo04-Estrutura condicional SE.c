/*
Calcula a media de um aluno, considerando duas notas
e emite uma mensagem de aprovado ou reprovado.
*/

#include<stdio.h>
#include<conio.c>

main() {
	float nota1, nota2, media;
	
	textcolor(14);
	textbackground(9);
	clrscr();
	
	gotoxy(5,5);
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	
	gotoxy(5,7);
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	
	media = (nota1 + nota2) / 2;
	
	gotoxy(5,10);
	printf("Media = %.1f",media);
	
	gotoxy(5,12);
	if(media>=6)
		printf("Aprovado");
	else
		printf("Reprovado");
		
	getch();
}
