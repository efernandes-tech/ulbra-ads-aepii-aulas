/*
Ler uma string com ate 40 caracteres,
converter as letras minusculas em maiusculas
e escrever a string modificada.
*/

#include<stdio.h>
#include<conio.c>

main(){
    char frase[40];
    
    clrscr(); // Limpa a tela.
    gotoxy(5,4);
    printf("Digite uma frase: ");
    fflush(stdin); // Limpa o buffer.
    fgets(frase,40,stdin); // Pega a frase.
    gotoxy(5,10);
    printf(strupr(frase)); // Exibe a frase com as letras em maiusculo.
    getche(); // Da uma pausada.
}
