// Flexibilidade do for.

#include<stdio.h>

main() {
	//Escreve nos. de 0 a 98 em incremento de 2.
	int x,y;
	for(x=0,y=0;x+y<100;x=x+1,y=y+1)
		printf("%i ",x+y);

	/*
	Imprime as letras minúsculas do
	alfabeto e seus respectivos códigos
	decimais da tabela ASCII.
	*/
	char ch;
	for(ch='a';ch<'z';ch++)
		printf("Valor ASCII de %c é %d.\n",ch,ch);

	/*
	Lê caracteres, um a um até que seja
	digitado X, e imprime o caractere
	seguinte a partir do código ASCII.
	*/
	char ch2;
	for(ch2=getch();ch2!='X';ch2=getch())
		printf("%c ",ch2+1);

	/*
	Lê caracteres, um a um até que seja
	digitado X, e imprime o caractere
	seguinte a partir do código ASCII.
	*/
	char ch3;
	for( ; (ch3=getch())!='X'; )
		printf("%c ",ch3+1);

	/*
	// Entra em laço infinito
	for( ; ; )
		printf("Laço infinito./n");
	*/
}
