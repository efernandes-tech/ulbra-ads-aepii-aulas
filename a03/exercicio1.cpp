// Ler a nota final de 10 alunos, e calcular a media da turma.

#include<stdio.h>
#include<conio.c>

main(){
    float nota[10], soma=0, media;
    int i, count = 0;
    clrscr(); // Limpa a tela.
    for(i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %i:", i+1);
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }
    media = soma / 10;
    gotoxy(5, 15); // Posiciona o cursor na tela (coluna, linha).
    printf("Media da turma = %.1f", media);
    for(i = 0; i < 10; i++) {
        if (nota[i] > media)
            count++;
    }
    gotoxy(5, 17); // Posiciona o cursor na tela (coluna, linha).
    printf("%i alunos tiveram nota superior a media da turma.", count);
    getch(); // Faz uma pausa.
}
