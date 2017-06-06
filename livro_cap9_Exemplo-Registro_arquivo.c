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
        gotoxy(10,3); printf("MENU"); // coluna (x), linha (y) = plano cartesiano
        gotoxy(10,4); printf("=====");
        gotoxy(10,6); printf("1 - Incluir");
        gotoxy(10,7); printf("2 - Listar");
        gotoxy(10,8); printf("3 - Consultar");
        gotoxy(10,9); printf("4 - Editar");
        gotoxy(10,10); printf("5 - Excluir");
        gotoxy(10,11); printf("6 - Sair");
        gotoxy(10,13); printf("Opção: ");
        gotoxy(18,13); op = getche();      // Le a opção do usuário.
        switch(op) {                       // faz a chamada a uma
            case '1': incluir(); 	break; // das funcoes, conforme
            case '2': listar(); 	break; // a opcao escolhida pelo
            case '3': consultar(); 	break; // usuario.
            case '4': editar(); 	break;
            case '5': excluir(); 	break;
            case '6': clrscr();
                gotoxy(10,10); printf("O programa foi encerrado.");
                gotoxy(10,12); printf("Tecle algo para sair...");
                getche();
                break;
            default: gotoxy(10,15); printf("Opção invalida.");
                     gotoxy(10,17); printf("Tecle algo para continuar...");
                     getche();
        }
    } while(op != '6');
}

// ----- Função incluir
void incluir() {
    resp = 's';

    arq = fopen("cad_aluno.txt", "ab"); // Abre ou cria o arquivo.

    if(arq) { // Se o arquivo foi aberto corretamente,
              // le os dados, calcula a media e grava o resultado no arquivo.
        while(resp == 's' || resp == "S") {
            clrscr();
            gotoxy(10,3); printf("Cadastro de aluno"); // coluna, linha
            gotoxy(10,5); printf("=====");
            gotoxy(10,7); printf("Codigo...: ");  scanf("%i", &reg.cod);
            gotoxy(10,8); printf("Nome.....: ");  fflush(stdin);
                                                  fgets(reg.nome, 30, stdin);
            gotoxy(10,9);  printf("Nota 1...: "); scanf("%f", &reg.n1);
            gotoxy(10,10); printf("Nota 2...: "); scanf("%f", &reg.n2);

            reg.med = (reg.n1 + reg.n2) / 2;
            gotoxy(10,11); printf("Media....: %.1f", reg.med);

            // O comando abaixo grava os dados do registro no arquivo,
            // a variavel teste recebe o retorno da funcao fwrite,
            // se ocorrer algum erro no processo, a funcao retorna nulo.
            teste = fwrite(&reg, sizeof(struct aluno), 1, arq);

            if(teste) {
                gotoxy(10,14);
                printf("Registro gravado com sucesso!");
            }
            gotoxy(10,20);
            printf("Deseja continuar? S/N ");
            resp = getche();
        }
        fclose(arq); // Fecha o arquivo.
    }
}

// ----- Função listar

void listar() {
    int linha = 9;
    
    arq = fopen("cad_aluno.txt", "rb"); // Abre o arquivo para leitura.
    
    clrscr();
    if(arq) { // Se o arquivo foi aberto corretamente, lista os dados.
        gotoxy(10,3); printf("Lista geral de alunos");
        gotoxy(10,5); printf("=====");
        gotoxy(10,7); printf("Codigo  Nome          N1  N2  Media");
        
        while(!feop(arq)){ // Enquanto nao for o final do arquivo.

            // O comando abaixo le os dados do registro, gravados no arquivo,
            // a variavel teste recebe o retorno da funcao fread,
            // se ocorrer algum erro no processo, a funcao retorna nulo.
            
            teste = fread(&reg, sizeof(struct aluno), 1, arq);
            
            if(teste && strcmp(reg.nome, "")) { // Exibe os dados na tela.
            	gotoxy(10,linha); printf("%04i",reg.cod);
            	gotoxy(18,linha); puts(reg.nome);
            	gotoxy(40,linha); printf("%.1f",reg.n1);
            	gotoxy(45,linha); printf("%.1f",reg.n2);
            	gotoxy(50,linha); printf("%.1f",reg.med);
            	if(linha<17)
            		linha++;
            	else { // "Rola" os registros na tela.
            		gotoxy(10,22);
            		printf("Tecle ENTER p/ continuar exibindo os registros.");
            		getch();
            		gotoxy(10,9); delline(); // Excluir a primeira da lista.
            		gotoxy(10,17); insline(); // Insere linha no final da lista.
				}
			}
        }
        gotoxy(10,22); printf("Listagem concluida.");
        gotoxy(10,23); printf("Tecle algo para voltar ao menu...");
        getch();
        fclose(arq); // Fecha o arquivo.
    }
    else {
    	gotoxy(10,8); printf("Arquivo vazio.");
        gotoxy(10,10); printf("Tecle algo para voltar ao menu...");
        getch();
	}
}

// ^^^^ pg 185 ^^^^
