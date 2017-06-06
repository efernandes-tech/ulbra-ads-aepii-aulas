// construir uma calculadora que contenha as operacoes "+", "-", "*" e "/".

#include <stdio.h>
#include <conio.c>

main(){
	float valor1,valor2, r;
	char operador;

	clrscr();
	
	gotoxy(10,5);
	printf("Digite o primeiro valor:");
	scanf("%f",&valor1);

	gotoxy(10,8);
	printf("Digite o operador: ");
	gotoxy(29,8);
	operador=getche();
	
	gotoxy(10,11);
	printf("Digite o segundo valor:");
	scanf("%f",&valor2);
	
	switch(operador){
		case'+':
			r=valor1+valor2;
			break;
		case'-':
			r=valor1-valor2;
			break;
		case'*':
			r=valor1*valor2;
			break;
		case'/':
			if(valor2!=0)
				r = valor1 / valor2;
			else
				r = 0;
			break;
		default:
			gotoxy(10,15);
			printf("Operador inválido!");
			r=0;
	}
	
	gotoxy(10,18);
	printf("Resultado = %3.2f",r);

	getch();
}
