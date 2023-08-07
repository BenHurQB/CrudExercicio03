#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define tam 3
#define col 40

int consulta, delet, troca, inseridos, opcao;
int codigo[tam];
char nome[tam][col], email[tam][col];
/*
tam = tamanho do vetor
col = comprimento do vetor string
consulta = controla menu de consulta de dados
delet = controla menu de delecao de dados
troca = controla menu de alteracao de dados
inserido = controla qtd de registros nos vetores
opcao = controla menu de tela principal
  */
