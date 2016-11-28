#ifndef VOTACAO_H
#define VOTACAO_H

#include <stdio.h>
#include <stdlib.h>

#ifdef linux
  #include <stdio_ext.h>
#endif
 

typedef struct Voto {

  int vSim;
  int vNao;
  int abestencoes;
  int tVotos;

} Voto;

typedef struct Palamentar{

  int codPalamentar;
  // Partidos partido;
  char estado[2];
  char sexo;
  Voto votos;
} Palamentar;





/* libs */

void limpaTela(); // limparTela.h
void clearBuffer(); // clearBuffer.h

/* Menus */
void menuPrincipal();
void menuVotacao();

/* votação secreta */
void encerrarVotacaoSecreta(Voto votos, int votantes);
void votacaoSecreta();

/* votação aberta */
void votacaoAberta();

#endif
