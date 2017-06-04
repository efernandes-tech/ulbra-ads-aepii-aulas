// Calcula o salario de um funcionario.

#include<stdio.h>
#include<conio.c>

main() {
	char nome[70];
	int ht;
	float vh, sb, inss, sl;
	
	clrscr();
	gotoxy(5,5); 	printf("Nome do funcionario: ");
					fflush(stdin); fgets(nome,70,stdin);
	gotoxy(5,7); 	printf("Quantidade de horas trabalhadas: ");
					scanf("%i",&ht);
	gotoxy(5,9); 	printf("Valor da hora: ");
					scanf("%f",&vh);
	sb=ht*vh;
	inss=sb*0.08;
	sl=sb-inss;
	
	clrscr();
	
	gotoxy(5,11); printf("Funcionario: %s",nome);
	gotoxy(5,12); printf("Salario bruto: R$ %.2f",sb);
	gotoxy(5,13); printf("INSS: R$ %.2f",inss);
	gotoxy(5,14); printf("Salario liquido: R$ %.2f",sl);
	
	getch();
}
