#ifndef VOTACAO_H
#define VOTACAO_H

#include <stdio.h>
#include <stdlib.h>

#include <locale.h>

#ifdef linux
  #include <stdio_ext.h> // lib para __fpurge (limpar buffer do teclado)
#endif




typedef struct Voto {

  int vSim;
  int vNao;
  int abestencoes;
  int tVotos;

} Voto;

typedef struct Partido {
  char *siglaPartido;
} Partido;

typedef struct Palamentar{

  int codPalamentar;
  Partido partidos;
  char estado[2];
  char sexo;
  Voto votos;
} Palamentar;





/* Cross-Compile */

void limpaTela(); // limparTela.h
void clearBuffer(); // clearBuffer.h
void pausaTela (); // pausaTela.h
void setLingua(); // config para portugues (windows)

/* Menus */
void menuPrincipal();
void menuVotacao();

/* votação secreta */
void encerrarVotacaoSecreta(Voto votos, int votantes);
void votacaoSecreta();

/* votação aberta */
void votacaoAberta();

#endif
