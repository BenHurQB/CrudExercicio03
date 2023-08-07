#include "varGlobais.h"

int telaConsulta(){
  
  
  
   printf("\nMenu de Consulta de Registro APP CRUD\n");
   printf("\n------------------------------------");
   printf("\n [1] - Consulta Total");
   printf("\n [2] - Consulta por Registro");
   printf("\n [3] - Consulta por Codigo");
   printf("\n [4] - Home\n");
   printf("-------------------------------------");
   printf("\n Sua opcao:");
   scanf(" %i", &consulta); // recebe a opcao do menu para encaminhar para fucao consultaDados
   while (consulta < 1 || consulta  > 4){ // so envia opcao existente no menu
       printf("\033[41m");
       printf("\n\nOpcao Invalida!!!!\n\n");
       printf("\033[40m");
       printf("\nSua opcao: ");
       scanf(" %i", &consulta);

  }

  return consulta; 
  }