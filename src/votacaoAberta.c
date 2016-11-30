#include "../include/votacao.h"


void votacaoAberta() {

  setLingua();

  int nVotantes, i, vSim = 0, vNao = 0;
  char opc;

  Palamentar *parlamentares;
  Partido partidos[100];

  printf(" Insira o total de votantes: ");
  scanf("%d", &nVotantes);
  clearBuffer();
  limpaTela();



  parlamentares = (Palamentar*) malloc(nVotantes * sizeof(Palamentar));

  printf(" Inisra o código do palamentar\n");
  scanf("%d", &parlamentares->codPalamentar);
  clearBuffer();

  

}
