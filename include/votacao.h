#ifndef VOTACAO_H
#define VOTACAO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <locale.h>

#ifdef linux
  #include <stdio_ext.h> // lib para __fpurge (limpar buffer do teclado)
#endif


/* Class */

typedef struct Voto {

  int vSim;
  int vNao;
  int abestencoes;
  int tVotos;

} Voto;

typedef struct Partido {

  char siglaPartido[100];
  

} Partido;

typedef struct Palamentar{

  int codPalamentar;
  Partido partidos;
  char *estado;
  char sexo;
  Voto votos;

} Palamentar;


/* MACROS */

#ifndef MAX_PARTIDOS
#define MAX_PARTIDOS 5
#endif


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
Partido* geraPartidos(Partido*);
void preparaMenu(Partido*);
void pegaPartidos(Partido *partido, int);

#endif
