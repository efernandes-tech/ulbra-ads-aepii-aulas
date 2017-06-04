// Calcula a media de um aluno,
// considerando duas notas.

#include<stdio.h>
#include<conio.c>

main(){
	float nota1, nota2, media;
	
	textcolor(14); // Seleciona a cor amarela para o texto.
	textbackground(9); // Seleciona a cor azul claro para a tela.
	clrscr(); // Limpar a tela para que toda ela mude de cor.
	
	gotoxy(5,5);
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	gotoxy(5,7);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	gotoxy(5,10);
	printf("Media = %.1f", media);
	getch(); // Usado para coletar um caracter, e aqui para criar uma pausa.
}
