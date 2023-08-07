#include "varGlobais.h" // variaveis globais
//#include "telaAltera.h"

int telaAltera();

void alteraDados(){

  /*Declaracao de variaveis locais
     cod - recebi codigo temporario para testes e pesquisas
     i - indice
     ialt - posicao / registro
     achei - pesquisa se for verdadeiro
     j - indice
  */
  
  int cod, i, ialt, achei, j, itroca; 
  
  
   switch ( troca ){ // looping para execucao de altera de dados
      case 1 :
        achei = 0;
        if (codigo[0] == 0 || inseridos == 0){ // acao que mostra nao haver registro no banco
          printf("\033[41m");
          printf("\n\n**BANCO SEM REGISTRO**\n\n");
          printf("\033[40m");
          sleep(1);
        }
        else{ 
          printf("\nInforme o registro que deseja alterar: ");//localizar o registro para alteracao
          scanf("%i",&ialt);
            if (ialt <= inseridos){
                printf("\nInsira alteracao\n");
                printf("\nNOVO codigo (100 entre 999):");
                scanf( "%i", &cod);
                while (cod < 100 || cod > 999){ // Validacao do codigo com 03 digitos
                    printf("\n\nCodigo Invalido!!!!\n\n");
                    printf("\nDigite codigo (entre 100 e 999):");
                     scanf( "%i", &cod);
                    }
                i = 0;
                while (i <= inseridos ){ 
                   if (codigo[i] == cod){ // verificar se ja existe o codigo no cadastro
                        printf("\033[41m");
                        printf("\n\nNegado!! codigo Ja cadastrado.\n\n") ; // encontrou o codigo e nao pode cadastrar
                        printf("\033[40m");
                        achei = 1;
                        i = inseridos + 1; //forcar a saida do laco
                        }
                        i++;
                        
                    }
                    if (achei == 0){
                       codigo[ialt-1] = cod;    //altera os codigos nome e email
                       printf("\nNOVO nome:");
                       scanf( "%s", nome[ialt-1]);
                       printf("\n NOVO email:");
                       scanf( "%s", email[ialt-1]);
                       printf("\033[42m");
                       printf("\n\nRegistro ALTERADO com SUCESSO\n\n");
                       printf("\033[40m");
                       sleep(1);
                    }
               
            }
            else{ // informa que registro nao foi cadastrado
              printf("\033[41m");
              printf("\n\nNEGADO. Esse Registro não foi cadastrado!!\n\n");
              printf("\033[40m");
              sleep(1);
            }
          }
          
        break; 
     
      case 2 :

        achei = 0;
        
        if (codigo[0] == 0 || inseridos == 0){ // acao que mostra nao haver registro no banco
          printf("\033[41m");
          printf("\n\n**BANCO SEM REGISTRO**\n\n");
          printf("\033[40m");
          sleep(1);
        }
        else{ 
          printf("\nInforme o codigo que deseja alterar (100 entre 999): ");
          scanf("%i",&cod);
          
                   while (cod < 100 || cod > 999){ // Validacao do codigo com 03 digitos
                        printf("\n\nCodigo Invalido!!!!\n\n");
                        printf("\nDigite codigo (entre 100 e 999):");
                        scanf( "%i", &cod);
                      } 
          //localizar o indice do codigo que pretende alterar
           i = 0;
           while (i <= inseridos ){ 
              if (codigo[i] == cod){ // verificar se ja existe o codigo no cadastro
                   codigo[i] = cod;
                   printf("\nNOVO nome:");
                   scanf( "%s", nome[i]);
                   printf("\n NOVO email:");
                   scanf( "%s", email[i]);
                   printf("\033[42m");
                   printf("\n\nRegistro ALTERADO com SUCESSO\n\n");
                   printf("\033[40m");
                   sleep(1);
                   i = inseridos + 1; // forcar a saida
                   achei = 1;
                   } 
                   i++;

            }
            if (achei == 0){
                  printf("\033[41m");
                  printf("\n\nNegado!!! Esse CODIGO nao foi cadastrado.\n\n");
                  printf("\033[40m");

            }
        }
          break;
          
      case 3: // retorno para home 
        
          break;
           }
        }                 
