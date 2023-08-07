#include "varGlobais.h"


int telaAltera(){
  
   printf("\nMenu de Alteracao de Registro APP CRUD\n");
   printf("-------------------------------------");
   printf("\n[1] - Numero Registro");
   printf("\n[2] - Codigo Registro");
   printf("\n[3] - Home\n");
   printf("-------------------------------------");
   printf("\n Sua opcao: ");
   scanf(" %i", &troca);// recebe a opcao do menu para encaminhar para fucao alteraDados
  while (troca < 1 || troca > 3){// so envia codigos validos 
       printf("\033[41m");
       printf("\n\nOpcao Invalida!!!!\n");
       printf("\033[40m");
       printf("\nSua opcao: ");
       scanf(" %i", &troca);

  }
   return  troca;
  }