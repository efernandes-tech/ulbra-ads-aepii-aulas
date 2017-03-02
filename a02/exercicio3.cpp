/*
Ler um valor inteiro, ate que o usuario
digite 471 ou erre tres vezes consecutivas.
-> senha valida
-> tres tentativas - erro
*/

#include<stdio.h>
#include<stdlib.h>

main(){
    int senha, tentativa;

    tentativa = 0;
    do {
        printf("Digite a senha: ");
        scanf("%i", &senha);
        tentativa++;
        //if (senha == 471) {
        //    printf("\nSenha valida!\n\n");
        //} else {
        //    tentativa++;
        //}
        
        //if (tentativa == 3) {
        //    printf("\nTres tentativas - erro!\n\n");
        //    break;
        //}
    } while(senha != 471 && tentativa < 3);
    
    if (senha == 471)
        printf("\nSenha valida!\n\n");
    else
        printf("\nTres tentativas invalida!\n\n");

    system("pause");
}
