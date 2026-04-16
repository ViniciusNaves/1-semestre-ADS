#include <stdio.h>


    
   void comandofor(){
     
      for (int i = 0; i < 10; i++)
     {
        printf("Ola, mundo!\n");
     }
     
      }
   

   int main() {
   
   int opcao;


    
    
    printf("1 - Usando o comando for\n");
    printf("2 - Escrevendo manualmente\n");
    printf("Escolha sua opcao:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        comandofor();
        break;
    case 2:
       printf("Ola,mundo!\n");
       printf("Ola,mundo!\n");
       printf("Ola,mundo!\n");
       printf("Ola,mundo!\n");
       printf("Ola,mundo!\n");
       printf("Ola,mundo!\n");
       printf("Ola,mundo!\n");
       printf("Ola,mundo!\n");
       printf("Ola,mundo!\n");
       printf("Ola,mundo!\n");

        break;
    default:
       printf("Escolha uma opcao existente!\n");
        break;
    }
   }
