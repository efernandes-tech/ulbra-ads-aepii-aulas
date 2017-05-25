// Exercicio 1 - Cap 9

#include<stdio.h>
#include<conio.c>
#include<string.h>

// --- Prototipo das funcoes

void gravar();
void editar();
void excluir();
void consultar();
void relatorio();

// --- Variaveis de escopo global

struct atleta {
    int cod, idade;
    char nome[80];
    float altura;
}reg;

FILE *arq;

main() {
    char op;
    
    do {
        clrscr();
        gotoxy(3,5); printf("--- Cadastro de atleta ---");
        gotoxy(6,8); printf("1 - Gravar");
        gotoxy(6,10); printf("2 - Editar");
        gotoxy(6,12); printf("3 - Excluir");
        gotoxy(6,14); printf("4 - Consultar por clube");
        gotoxy(6,16); printf("5 - Gerar relatorio");
        gotoxy(6,18); printf("6 - Sair");
        gotoxy(6,21); printf("Opcao: ");

        op = getch();
        
        switch(op) {
            case '1': gravar(); break;
            case '2': editar(); break;
            case '3': excluir(); break;
            case '4': consultar(); break;
            case '5': relatorio(); break;
            case '6': break;
            default: gotoxy(6,23);
                     printf("Opcao invalida, tecle algo para voltar ao menu...");
                     getch();
        }
    }while(op != '6');
}

void gravar(){
    
}

void editar(){
    
}

void excluir(){
    
}

void consultar(){
    
}

void relatorio(){
    
}
