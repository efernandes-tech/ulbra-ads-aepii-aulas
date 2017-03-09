// Ler a nota final de 10 alunos, e calcular a media da turma.

#include<stdio.h>
#include<conio.c>

main(){
    float nota, soma=0, media;
    int i;
    
    clrscr(); // Limpa a tela.
    for(i = 1; i <=10; i++) {
        printf("Digite a nota do aluno %i:", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }
    media = soma / 10;
    gotoxy(5, 15); // Posiciona o cursor na tela (coluna, linha).
    printf("Media da turma = %.1f", media);
    getch(); // Faz uma pausa.
}
