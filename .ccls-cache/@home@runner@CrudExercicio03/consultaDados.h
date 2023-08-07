#include "varGlobais.h"


void consultarDados(){
  
  /* Declaracao de variaveis locais
    i = indice
    cons = recebi registro para consulta e pesquisa
    cod = codigo provisorio
    achei = variavel para pesquisa em vetores

  */  
  int i, cons, cod, achei;
  
  
  achei = 0;
  
  switch (consulta){

    case 1:
     if (codigo[0] == 0 || inseridos == 0){ // Condicao para verificar se existe registro no banco
        printf("\033[41m");
        printf("\n\n**BANCO SEM REGISTRO**\n\n");
        printf("\033[40m");
        sleep(1);
      }
      else{ // exibe o banco total / todos os registros
      printf("\033[42m");
      printf("\nRegistro    Codigo        Nome       Email ");
      printf("\n-----------------------------------------------------");
      for (i=0;i<inseridos;i++){
      printf("\n%i          %i             %s         %s",i+1,codigo[i],nome[i],email[i]);
  
      }
      printf("\n");
      printf("\033[40m");
      sleep(1);
      }

      
      
    break;

    case 2:
       if (codigo[0] == 0 || inseridos == 0){
        printf("\033[41m");
        printf("\n\n**BANCO SEM REGISTRO**\n\n");
        printf("\033[40m");
        sleep(1);
       }
       else{ // exibir o que esta cadastrado pelo numero do registro, um registro por vez
  
         printf("Informe o Registro: ");
         scanf("%i", &cons);
        if (cons <= inseridos && cons > 0){
            printf("\033[42m");
            printf("\nRegistro     Codigo      Nome                  Email ");
           printf("\n-----------------------------------------------------");
           printf("\n%i           %i          %s                    %s",cons,                   codigo[cons-1],nome[cons-1],email[cons-1]); 
           printf("\033[40m");
          }
        else{
          printf("\033[41m");
          printf("NEGADO. Essa posição nao foi incluida ou esta fora de escopo");
          printf("\033[40m");
        }
         }
      sleep(1);
      break;
    
    case 3:
      if (codigo[0] == 0 || inseridos == 0){
        achei = 1;
        printf("\033[41m");
        printf("\n\n**BANCO SEM REGISTRO**\n\n");
        printf("\n");
        printf("\033[40m");
        sleep(1);
       }
       else{ // exibir o banco pelo codigo registrado. Uma codigo por vez
     
        printf("Informe o Codigo: ");
        scanf("%i", &cod);
        for (i=0;i<=inseridos;i++){
            if (codigo[i] == cod){
              printf("\033[42m");
              printf("\nRegistro     Codigo      Nome                   Email ");
              printf("\n-------------------------------------------------- ---");
              printf("\n%i           %i          %s                     %s",i+1,                   codigo[i],nome[i],email[i]);
              i = inseridos + 1;
              achei = 1;
              printf("\033[40m");
            }
                    
      }
         
      if (achei == 0){ // critica que o codigo solicitado para exibir nao foi cadastrado
        printf("\033[41m");
        printf("\n\n\tNEGADO. Cogido nao foi CADASTRADO!!!!!\n\n");
        printf("\033[40m");
      }
         }
      sleep(1);
      break;

    case 4:
      break;


    
                
     }
 
 
    
}
