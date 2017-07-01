// exercicio 1 cap 8
// 65 > 90 = letras maiusculas
// 97 > 122 = letras minusculas

#include<stdio.h>
#include<conio.c>

int compara(char letra);

main() {
    char c;
    int retorno;

    clrscr();
    gotoxy(5,4);  printf("Digite uma letra: ");
    gotoxy(23,4); c=getche();

    retorno = compara(c);

    gotoxy(5,6);

    if (retorno == 1)
        printf("Vogal");
    else if (retorno == 0)
   	    printf("Consoante");
    else
    	printf("Vc nao digitou uma letra!");

    getch();
}

int compara(char letra) {
	int r;

	// digitou uma letra
    if((letra >= 65 && letra <= 90) || (letra >= 97 && letra <= 122)) {
 	    if(letra=='a' || letra=='A'
 		    || letra=='e' || letra=='E'
 		    || letra=='i' || letra=='I'
 		    || letra=='o' || letra=='O'
 		    || letra=='u' || letra=='U') {
	        r=1;
	    } else {
 	        r=0;
        }
	} else {
        r=2;
    }

	return r;
}
