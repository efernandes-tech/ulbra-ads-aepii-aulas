// Ler 1 string e 1 letra,
// e contar quantas vezes o caractere aparece na string.

#include<stdio.h>
#include<conio.c>
#include<string.h>

main(){
    char frase[20],letra;
    int i,cont=0;
    
    clrscr();
    gotoxy(5,4); printf("Digite uma frase: ");
    fflush(stdin); fgets(frase, 20, stdin);
    gotoxy(5,6); printf("Digite uma letra: ");
    gotoxy(23,6); letra=getche();
    
    for(i=0;i<strlen(frase);i++){
        if(frase[i]==letra)
            cont++;
    }
    gotoxy(5,10);
    printf("A letra %c aparece %i vezes na frase.",letra,cont);
    getch();
}
