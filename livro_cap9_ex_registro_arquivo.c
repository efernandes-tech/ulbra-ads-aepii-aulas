/*
AEPII
Exemplo de manipulação de registros e arquivos.
Funções: incluir, consultar, listar e excluir.
*/

#include<stdio.h>
#include<conio.c>
#include<string.h>

// ----- Protótipo das funções

void incluir();
void listar();
void consultar();
void editar();
void excluir();

// ----- Declaração de variáveis globais

struct aluno {
    int cod;
    char nome[30];
    float n1, n2, med;
}reg; // Declara o registro.

FILE *arq; // Declara o arquivo.
int teste;
char resp;

// ----- Função principal

main() {
    char op;
    
    do {
        clrscr();
        gotoxy(10,3); printf("MENU"); // coluna, linha
        gotoxy(10,4); printf("=====");
        gotoxy(10,6); printf("1 - Incluir");
        gotoxy(10,7); printf("2 - Listar");
        gotoxy(10,8); printf("3 - Consultar");
        gotoxy(10,9); printf("4 - Editar");
        gotoxy(10,10); printf("5 - Excluir");
        gotoxy(10,11); printf("6 - Sair");
        gotoxy(10,13); printf("Opção: ");
        gotoxy(18,13); op = getche(); // Le a opção do usuário.
    } while(op != '6');
}
