/*
Ler uma frase com ate 40 caracteres,
contar e exibir o numero de caracteres
sem usar a strlen().
*/

#include<stdio.h>
#include<conio.c>

main(){
    char frase[40];
    int i,cont=0;
    
    clrscr(); // Limpa a tela.
    gotoxy(5,4);
    printf("Digite uma frase: ");
    fflush(stdin); // Limpa o buffer do teclado.
    fgets(frase,40,stdin); // Pega a frase.

    for(i=0;frase[i]!='\0';i++){
        cont++;
    }

    gotoxy(5,10);
    printf("A frase tem %i caractere(s).", cont);
    getch(); // Faz uma pausa.
}
