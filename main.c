#include <stdio.h> // biblioteca
#include "varGlobais.h" // variaveis globais
#include "telaPrincipal.h" // mostra a tela inicial e gerencia os menus
#include "inserirDados.h" // funcao para inserir dados
#include "consultaDados.h" // funcao para consultar dados
#include "alteraDados.h" // funcao para alterar dados
#include "apagaDados.h"  // funcao para deletar dados
#include "telaConsulta.h" // mostra tela para fazer tipo de consulta
#include "telaAltera.h" // mostra tela para fazer alteracao de registros
#include "telaApaga.h" // mostra tela para fazer delecao de registros



int main(void) {

//int inseridos, opcao;
  
inseridos = 0; // variavel indice dos vetores preenchidos
telaPrincipal(); // gerencia as opcoes do Crud
while (opcao != 5){
    
    switch (opcao){

      case 1:

        inserirDados(); // inseri dados 
        //telaPrincipal();
        
      break;

      case 2:
        telaConsulta(); // menu de consulta de dados
        consultarDados();// executa a consulta dos dados
       // telaPrincipal();
      break;

      case 3:
        telaAltera(); // menu de alteracao de dados
        alteraDados(); // executa a alteracao de dados
       // telaPrincipal();
      break;

      case 4:
        telaApaga(); // menu de apagar dados
        apagaDados(); //
       // telaPrincipal();
      break;

      case 5:
      break;
    }
  
     telaPrincipal();
  }

 
printf("\n\nBen Inf agradece. Ateh a prohxima!!! \n");
printf("By BQB  -  Versao3\n\n\n ");

    
    return 0;

}


