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

char resp;
int teste;

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
        gotoxy(6,21); printf("Opcao:");

        gotoxy(13,21); op = getch();

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
    resp = 's';
    
    arq = fopen("atletas.txt", "ab");
        
    if(arq) {
        while(resp == 's' || resp == 'S') {
            clrscr();
            gotoxy(3,5); printf("--- Gravar ---");
       
            gotoxy(3,8); printf("Cod clube...:");
            gotoxy(3,10); printf("Nome atleta.:");
            gotoxy(3,12); printf("Idade.......:");
            gotoxy(3,14); printf("Altura......:");
            
            gotoxy(18,8); scanf("%i", &reg.cod);
            gotoxy(18,10); fflush(stdin); fgets(reg.nome, 80, stdin);
            gotoxy(18,12); scanf("%i", &reg.idade);
            gotoxy(18,14); scanf("%f", &reg.altura);
            
            teste = fwrite(&reg, sizeof(struct atleta), 1, arq);
            
            if(teste) {
                gotoxy(6,16);
                printf("Registro gravado com sucesso!");
            }
       
            gotoxy(6,23);
            printf("Continuar? S/N");
            resp = getch();
        }
        
        fclose(arq);
    }
}

void editar(){
    
}

void excluir(){
    
}

void consultar(){
    int linha = 9, achei = 0, cod_pesq;

    arq = fopen("atletas.txt", "rb"); 

    if(arq) {
        clrscr();
        gotoxy(3,5); printf("Codigo do clube a ser pesquisado: ");
        scanf("%i", &cod_pesq);
        
        clrscr();
        gotoxy(3,5); printf("--- Relatorio geral ---");
        gotoxy(3,7); printf("Cod clube  Nome atleta               Idade  Altura");

        rewind(arq);
        while(!feof(arq)) {
            teste = fread(&reg, sizeof(struct atleta), 1, arq);
            
            if(teste && cod_pesq == reg.cod) {
                achei = 1;
                gotoxy(3,linha); printf("%i", reg.cod);
                gotoxy(14,linha); printf("%s", reg.nome);
                gotoxy(40,linha); printf("%i", reg.idade);
                gotoxy(47,linha); printf("%.2f", reg.altura);
                
                if(linha < 17) {
                    linha++;
                } else {
                    gotoxy(3,23);
                    printf("Tecle algo para continuar...");
                    getch();
                    gotoxy(5,9); delline();
                    gotoxy(5,17); insline();
                }
            }
        }
        gotoxy(3,23);
        if (achei == 0)
            printf("Codigo de clube nao cadastrado, tecle algo para voltar ao menu...");        
        else
            printf("Relatorio concluido, tecle algo para voltar ao menu...");
        getch();
        fclose(arq);
    } else {
        clrscr();
        gotoxy(6,5);
        printf("Arquivo vazio, tecle algo para retornar ao menu...");
        getch();
    }
}

void relatorio(){
    int linha = 9;

    arq = fopen("atletas.txt", "rb"); 

    if(arq) {
        clrscr();
        gotoxy(3,5); printf("--- Relatorio geral ---");
        gotoxy(3,7); printf("Cod clube  Nome atleta               Idade  Altura");

        rewind(arq);
        while(!feof(arq)) {
            teste = fread(&reg, sizeof(struct atleta), 1, arq);
            
            if(teste) {
                gotoxy(3,linha); printf("%i", reg.cod);
                gotoxy(14,linha); printf("%s", reg.nome);
                gotoxy(40,linha); printf("%i", reg.idade);
                gotoxy(47,linha); printf("%.2f", reg.altura);
                
                if(linha < 17) {
                    linha++;
                } else {
                    gotoxy(3,23);
                    printf("Tecle algo para continuar...");
                    getch();
                    gotoxy(5,9); delline();
                    gotoxy(5,17); insline();
                }
            }
        }
        gotoxy(3,23);
        printf("Relatorio concluido, tecle algo para voltar ao menu...");
        getch();
        fclose(arq);
    } else {
        clrscr();
        gotoxy(6,5);
        printf("Arquivo vazio, tecle algo para retornar ao menu...");
        getch();
    }
}
