#include "../include/votacao.h"

void votacaoAberta() {

  int nVotantes, i, vSim = 0, vNao = 0;
  char opc;

  Palamentar * parlamentares;

  printf(" Insira o total de votantes: ");
  scanf("%d", &nVotantes);
  clearBuffer();
  limpaTela();

  parlamentares = malloc(sizeof(nVotantes));


  for (i = 0; i < nVotantes; i++) {
    do {
      printf("\n\n Insira o c�digo do palamentar: ");
      scanf("%d", &parlamentares ->codPalamentar);

      printf("\n\n Escolha o partido: ");
      opc = getchar();
      switch (opc) {
        case '1':

          break;
        case '2':

          break;
      }
      printf("\n\n [1] - Voto sim: \n [2] - Voto n�o: \n [3] - Encerrar a vota��o: \n\n %dN� votante  OPC: ", i + 1);
      opc = getchar();
      clearBuffer();
      limpaTela();

    } while(opc != '3');
  }


}
