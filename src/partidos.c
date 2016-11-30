#include "../include/votacao.h"

#define CAMINHO_DOS_PARTIDOS "/home/ghost/github/Trabalho/data/partidos.txt"


Partido* geraPartidos(Partido *partido){

  char buffer[100];
  char res[100], *p;
  int i, count = 0;


  // partidos->siglaPartido = (char*) malloc(sizeof(Partido) * 100);

  FILE *fp;
  fp = fopen (CAMINHO_DOS_PARTIDOS,"r");
  if (fp == NULL)
    printf("\n Ocorreu algum erro ao abrir o arquivo!\n\n");
  else {

    while (!feof(fp)) {
      fgets(buffer, 100, fp);
      count++;
        for (i = 0; i < 100; i++) {
          if (buffer[i] == '-') {
            p = &buffer[i + 1];
            strcpy(partido->siglaPartido, p);
            // pegaPartidos(partido, count);
          }
        }
      }

    fclose (fp);
  }

  return partido;
}
