#include "varGlobais.h"

int  telaPrincipal(){

  
  
  printf("\n\n********ORGANIZACOES TABAJARA********\n");
  printf("\nPROGRAMA DE CADASTRAMENTO DE CLIENTES\n");
  printf("\nMENU PRINCIPAL");
  printf("\n-------------------------------------");
  printf("\n[1] - INSERIR DADOS" );
  printf("\n[2] - CONSULTAR DADOS" );
  printf("\n[3] - ALTERAR DADOS" );
  printf("\n[4] - DELETAR DADOS" );
  printf("\n[5] - SAIR " );
  printf("\n-------------------------------------");
  printf("\nOpcao:  ");
  scanf("%i", &opcao); // recebe a opcao do menu para encaminhar para programa principal acionar a funcao
  while (opcao < 1 || opcao > 5){ // so libera opcoes validas
    printf("\033[41m");
    printf("\n\nOpcao Invalida!!\n\n");
    printf("\033[40m");
    printf("\n-------------------------------------\n");
    printf("\nSua Opcao:  ");
    scanf("%i", &opcao);
  }
  return (int) opcao;
}


                       