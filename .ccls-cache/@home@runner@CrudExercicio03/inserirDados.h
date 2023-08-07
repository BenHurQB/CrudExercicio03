#include "varGlobais.h"
#include "telaInserir.h"
//void telaInserir();

void inserirDados(){

  
  if (inseridos < tam){ // se houver espaco no banco, chama a tela para a inserir regitros no banco
       
    telaInserir();
  }
  else{ // nao ha mais espcao para inserir registo no banco
    printf("\033[41m");
    printf("\n\nNEGADO. Sem espaço no Banco de Dados!!\n\n");
    printf("\033[40m");
    sleep(1);
  }
  
  } 