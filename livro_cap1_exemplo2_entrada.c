/*
A função scanf é utilizada para ler dados numéricos.
As funções getch e getche para ler um único caractere por vez.
A função fgets para ler cadeias de caracteres (strings).
*/
#include<stdio.h>

main() {
	float peso;
	int idade;
	scanf("%f",&peso);
	scanf("%i",&idade);
	
	char letra;
	letra=getch(); // Somente le o caracter.
	letra=getche(); // Le o caracter e o escreve na tela.
	
	char fone[15];
	char nome[60];
	fflush(stdin); // Limpa o buffer do teclado.
	fgets(fone,15,stdin);
	fflush(stdin);
	fgets(nome,60,stdin);
}
