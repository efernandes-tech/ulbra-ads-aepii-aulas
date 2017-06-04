// Exercicio 1 - cap.6

# include <stdio.h>
# include <conio.c>
# include <locale.h>

struct reg {
       int cod,idade;
       char nome[60],clube[60];
       float altura;

}atleta[100];

main(){
      char op,resp;
      int x,i=0,linha;
      
      setlocale(LC_ALL,"");
      do{
      clrscr();
      gotoxy(5,5); printf("1 - Cadastrar atletas");
      gotoxy(5,7); printf("2 - Gerar relatorio");
      gotoxy(5,9); printf("3 - Sair");
      gotoxy(5,11); printf("Digite sua opção: ");
      gotoxy(23,11); op=getche();
      switch(op){
        case '1': do{
                    clrscr();
                    gotoxy(5,5);   printf("Cadastro de atleta ");
                    gotoxy(5,7);   printf("Cod Inscrição...: ");
                    gotoxy(5,9);   printf("Nome............: ");
                    gotoxy(5,11);  printf("Clube...........: ");
                    gotoxy(5,13);  printf("Idade...........: ");
                    gotoxy(5,15);  printf("Altura..........: ");
                    gotoxy(23,7);  scanf("%i",&atleta[i].cod);
                    gotoxy(23,9);  fflush(stdin); fgets(atleta[i].nome,60,stdin);
                    gotoxy(23,11); fflush(stdin); fgets(atleta[i].clube,60,stdin);
                    gotoxy(23,13); scanf("%i",&atleta[i].idade);
                    gotoxy(23,15); scanf("%f",&atleta[i].altura);
                    i++;
                    gotoxy(5,18); printf("continuar? S/N ");
                    resp=getch();
                  }while(( resp=='s' || resp=='S')&&i<100);  
                    break;
        case '2': if(i==0){
                     clrscr();
                     gotoxy (5,5); 
                     printf("Não existem registros gravados,tecle algo para retornar ao menu");
                  }
                  else{
                  
                     clrscr();
                     linha=9;
                     gotoxy (5,5); printf("Relatorio");
                     gotoxy (5,7); printf("Insc Nome                 Clube            Idade Altura");
                     for (x=0;x<i;x++){
                         gotoxy(5,linha); printf("%i",atleta[x].cod);
                         gotoxy(10,linha); printf("%s",atleta[x].nome);
                         gotoxy(32,linha); printf("%s",atleta[x].clube);
                         gotoxy(50,linha); printf("%i",atleta[x].idade);
                         gotoxy(55,linha); printf("%.2f",atleta[x].altura); 
                         if (linha<17)
                            linha++;  
                         else{
                             gotoxy(5,20); printf("Tecle algo para continuar...");
                             getch();
                             gotoxy(5,9);  delline();
                             gotoxy(5,17);  insline();  
                             }              
                     }
                     gotoxy (5,5); printf("Relatorio concluído, tecle algo para retornar ao menu...");
                  }
                  getch();
                  break;
        case '3': gotoxy (5,15);
                  printf("Obrigado por usar o programa,tecle algo para sair...");
                  getch();
                  break;  
        default: break; 
        }                                    
      }while(op!='3');     
}

