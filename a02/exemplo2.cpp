/*
Ler n valores (zero encerra a entrada de dados).
Encontrar e escrever o menor entre eles.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
    float v, me;
    
    printf("Digite um valor: ");
    scanf("%f", &v);
    me = v;
    
    while(v!=0){
        printf("Digite um valor: ");
        scanf("%f", &v);
        if (v != 0 && v < me) {
            me = v;
        }
    }
    
    printf("\nMenor valor = %.1f\n\n", me);
    system("pause");
}
