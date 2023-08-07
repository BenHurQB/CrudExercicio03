#include "varGlobais.h"



void telaInserir(){

     //declara de variavei locais - i - indice e achei para pesquisa em vetores
     int i, achei;
     
     achei = 0;
     printf("\nMenu  Inserir  Registros APP CRUD");
     printf("\n-------------------------------------");
     printf("\nInsira os Registros \n");
     printf("-------------------------------------");
     printf("\nDigite codigo (entre 100 e 999):");
     scanf( "%i", &codigo[inseridos]); // validacao de tamanho de codigo do registro
     while (codigo[inseridos] < 100 || codigo[inseridos] > 999){
       printf("\n\nCodigo Invalido!!!!\n\n");
       printf("\nDigite codigo (entre 100 e 999):");
       scanf( "%i", &codigo[inseridos]);
       }
    if (inseridos > 0){
     for (i=0;i<inseridos;i++){ //pesquisa no vetor codigo
       if (codigo[i] == codigo[inseridos]){ // condicao para verificar se ja existe registro no banco
         printf("\033[41m");
         printf("\n\nNegado. Ja existe Registro com esse codigo\n\n");
         printf("\33[40m");
         achei = 1;
         i = inseridos + 1;
         sleep(1);
       }
      }
    }
    if (achei == 0 || inseridos == 0){
         printf("\nDigite nome:");
         scanf( "%s", nome[inseridos]);
         printf("\nDigite email:");
         scanf( "%s", email[inseridos]); 
         inseridos++;  // contagem de numero de inseridos
         printf("\n\nAVISOS: ");
         printf("\n---------------------------------------");
         printf("\033[42m");
         printf("\n\nRegistro numero %i inserido com SUCESSO\n", inseridos);//mostro o registro inserido
         printf("\n\nO BANCO  possui espaço para mais %i insercao(oes).\n\n", tam - inseridos);      
         printf("\033[40m");
         sleep(1);
       }
      
     
 
}