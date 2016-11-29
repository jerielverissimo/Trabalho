#include "../include/votacao.h"

void getPartidos(){

  char buffer[100];
  char *res;


  FILE *fp;
  fp = fopen ("/home/ghost/github/Trabalho/data/partidos.txt","r");
  if (fp == NULL)
    printf("\n Ocorreu algum erro ao abrir o arquivo!\n\n");
  else {

    while (!feof(fp)) {
      res = fgets(buffer, 100, fp);
      if(res)
        printf("%s\n", buffer);
    }
    fclose (fp);

  }




}
