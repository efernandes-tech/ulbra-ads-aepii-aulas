// Ler 1 valor inteiro entre 1 e 10.

#include<stdio.h>
#include<stdlib.h>

main(){
    int v;
    
    printf("Digite um valor entre 1 e 10: ");
    scanf("%i", &v);
    //if (v >= 1 && v <= 10) {
    //    printf("\nok\n\n");
    //} else {
        //while(v < 1 || v > 10) {
        while(v < 1 || v > 10) {
            printf("E r r o!\n");
            printf("Digite um valor entre 1 e 10: ");
            scanf("%i", &v);
            //if (v >= 1 && v <= 10) {
            //    printf("\nok\n\n");
            //}
        }
    //}
    printf("\nOk!\n\n");

    system("pause");
}
