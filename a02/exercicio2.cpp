/*
Ler 1 valor inteiro entre 1 e 10, escrever
a tabuada do valor lido.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
    int v, i, tab;
    
    printf("Digite um valor entre 1 e 10: ");
    scanf("%i", &v);

    while(v < 1 || v > 10) {
        printf("E r r o!\n");
        printf("Digite um valor entre 1 e 10: ");
        scanf("%i", &v);
    }

    printf("\nTabuado do %.i\n\n", v);

    for (i=1; i<=10; i++) {
        tab = i * v;
        printf("%.i x %.i = %.i\n", v, i, tab);
    }

    system("pause");
}
