#include "../include/votacao.h"

#define CAMINHO_DOS_PARTIDOS "/home/ghost/github/Trabalho/data/partidos.txt"


void getPartidos(){

  char buffer[100];
  char res[100], *p;
  int i;

  FILE *fp;
  fp = fopen (CAMINHO_DOS_PARTIDOS,"r");
  if (fp == NULL)
    printf("\n Ocorreu algum erro ao abrir o arquivo!\n\n");
  else {

    while (!feof(fp)) {
      fgets(buffer, 100, fp);

      for (i = 0; i < 100; i++) {
        if (buffer[i] == '-') {
          p = &buffer[i + 1];
          strcpy(res, p);
        }
      }

      
    }

    fclose (fp);
  }
}
