// Ler e encontrar o menor valor e a posicao dele.

#include<stdio.h>
#include<conio.c>

main(){
    int v[1], i, me = 1000, posicao, count = 0;
    clrscr();
    gotoxy(5, 5);
    printf("Digite 10 valores:");
    for (i = 0; i < 10; i++) {
        gotoxy(i * 4 + 5, 8);
        scanf("%i", &v[i]);
        if (v[i] < me) {
            me = v[i];
            posicao = i+1;
        }
    }
    for (i = 0; i < 10; i++) {
        if (v[i] % posicao == 0)
            count++;
    }
    gotoxy(5, 12);
    printf("Menor valor = %i", me);
    gotoxy(5, 14);
    printf("Posicao do menor valor = %i", posicao);
    gotoxy(5, 16);
    printf("Quantidade de multiplos da posicao = %i", count);
    getch();
}
