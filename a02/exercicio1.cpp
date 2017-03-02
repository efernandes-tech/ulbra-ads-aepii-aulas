// Ler 1 valor inteiro entre 1 e 10.

#include<stdio.h>
#include<stdlib.h>

main(){
    int v;
    
    printf("Digite um valor: ");
    scanf("%i", &v);
    if (v >= 1 && v <= 10) {
        printf("\nok\n\n");
    } else {
        while(v < 1 || v > 10) {
            printf("Digite um valor: ");
            scanf("%i", &v);
            if (v >= 1 && v <= 10) {
                printf("\nok\n\n");
            }
        }
    }

    system("pause");
}
