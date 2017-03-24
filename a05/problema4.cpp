/*
Ler o nome e sobrenome separadamente,
juntar as strings e escrever: a nova string,
o tamanho, a quantidade de nomes
e a primeira letra do nome.
*/

#include<stdio.h>
#include<conio.c>
#include<string.h>

main(){
    char nome[50], sobrenome[50], completo[100];
    int i, cont=1;
    
    clrscr(); // Limpa a tela.
    gotoxy(5,4);
    printf("Digite seu nome: ");
    gets(nome);

    gotoxy(5,6);
    printf("Digite o seu sobrenome: ");
    gets(sobrenome);
    
    strcat(completo,nome);
    strcat(completo," ");
    strcat(completo,sobrenome);
    
    gotoxy(5,8);
    printf("O seu nome completo e: %s", completo);
    
    gotoxy(5,10);
    printf("Seu nome tem %i caracteres.", strlen(completo));
    
    // tem x nomes
    for(i=0;i<strlen(completo);i++){
        if(completo[i] == ' ')
            cont++;
    }

    gotoxy(5,12);    
    printf("%i",cont);
    
    // a primeira letra é 
    
    getch();
}
