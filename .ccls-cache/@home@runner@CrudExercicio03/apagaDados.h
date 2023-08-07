#include "varGlobais.h" // fucao com variaveis globais
//#include "telaApaga.h"

void apagaDados(){

  /* Declaracao de variaveis locais
     cod = registra o codigo provisorio para pesquisa
     i = indice
     ialt = indice posicao ou registro
     j = indice
     jalt = indice posicao ou registro
  */
  int cod, i, ialt, j, jalt, l, c, achei;

  
  //delet = telaApaga();
  switch ( delet ){
      case 1 :
        achei = 0;
        if (codigo[0] == 0 || inseridos == 0){ // informa que banco esta sem registro
          printf("\033[41m");
          printf("\n\n**BANCO SEM REGISTRO**\n\n");
          printf("\033[40m");
          sleep(1);
         }
        else{ // rotina para deletar dado pelo registro se houver
          printf("\nInforme o registro que deseja deletar: ");
          scanf("%i",&ialt);
          if (ialt > inseridos){
            printf("\033[41m");
            printf("\n\nNegado. Esse registo nao foi cadastrado!!\n\n");
            printf("\033[40m");
            sleep(1);
            achei = 1;
            ialt = inseridos;
            }
          i = ialt-1;
          j = i;

          while (ialt  < inseridos){ //faz realocacao dos registros no sentido final para o incial a posicao que foi deletado nos vetores apos deletar registro
            codigo[i] = codigo [ialt];
            l = i;
            for(c=0;c<col;c++){
                  nome[l][c]=nome[l+1][c];
                  email[l][c]=email[l+1][c];
               }
              
            i++;
            ialt++;
          }
          
          
          if(achei == 0){
          printf("\033[42m");
          printf("\n\nRegistro DELETADO com SUCESSO\n\n");
          printf("\033[40m");
          sleep(1);
          inseridos = inseridos - 1;//gera espaco nos vetores apos deletar
          }
         }
         break; 
     
      case 2 :
        achei = 0;
        if (codigo[0] == 0 || inseridos == 0){ // informa que o banco esta sem registro
          printf("\033[41m");
          printf("\n\n**BANCO SEM REGISTRO**\n\n");
          printf("\033[40m");
          sleep(1);
         }
        else{
           // deletar o pelo codigo        
          printf("\nInforme o codigo que deseja deletar: ");
          scanf("%i",&cod);
           i = 0;
           while (i <= inseridos ){ 
              if (codigo[i] == cod){ // verificar se ja existe o codigo no cadastro
                   ialt = i;
                   i = inseridos + 1; // forcar a saida
                   achei = 1;
                   } 
                   i++;
            }

           if (achei == 1) {
             ialt = ialt + 1;
             i = 0;
             while (ialt  < inseridos){// fazer movimentacao dos vetores do final ate o indice do registro que foi deletado
              codigo[i] = codigo [ialt];
              l = i;
              for(c=0;c<col;c++){
                  nome[l][c]=nome[l+1][c];
                  email[l][c]=email[l+1][c];
               }
          
            i++;
            ialt++;
          }
          inseridos = inseridos - 1;//gera espaca para lancar dados
          printf("\033[42m");
          printf("\n\nCodigo DELETADO com SUCESSO\n\n");
          printf("\033[40m");
          sleep(1);
          }
          else{
             printf("\033[41m");
             printf("\n\nNegado!!! Esse CODIGO nao foi cadastrado.\n\n");
             printf("\033[40m");
          }
        }
          break;
          case 3:
          break;
          

  }
  
  
}