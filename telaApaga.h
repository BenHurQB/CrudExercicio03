#include "varGlobais.h"



int telaApaga(){

   printf("\nMenu de Deletar Registro APP CRUD\n");
   printf("\n-------------------------------------");
   printf("\n[1] - Numero Registro");
   printf("\n[2] - Codigo Registro");
   printf("\n[3] - Home\n");
   printf("-------------------------------------");
   printf("\n Sua opcao:  ");
   scanf(" %i", &delet);  // recebe a opcao do menu para encaminhar para fucao apagaDados
  
   while (delet < 1 || delet > 3){ // so envia opcao existente no menu
       printf("\033[41m");
       printf("\n\nOpcao Invalida!!!!\n");
       printf("\033[40m");
       printf("\nSua opcao:  ");
       scanf(" %i", &delet);
     
          }
    return delet;
  }