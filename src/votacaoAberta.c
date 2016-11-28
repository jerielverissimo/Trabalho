#include "../include/votacao.h"

void votacaoAberta() {

  setLingua();

  // int nVotantes, i, vSim = 0, vNao = 0;
  // char opc;

  // Palamentar *parlamentares;

  // printf(" Insira o total de votantes: ");
  // scanf("%d", &nVotantes);
  clearBuffer();
  limpaTela();



  // parlamentares = (Palamentar*) malloc(sizeof(nVotantes));

  getPartidos();


  // for (i = 0; i < nVotantes; i++) {
  //   do {
  //     printf("\n\n Insira o código do palamentar: ");
  //     scanf("%d", &parlamentares ->codPalamentar);
  //
  //     printf("\n\n Escolha o partido: ");
  //     opc = getchar();
  //     switch (opc) {
  //       case '1':
  //
  //         break;
  //       case '2':
  //
  //         break;
  //     }
  //     printf("\n\n [1] - Voto sim: \n [2] - Voto não: \n [3] - Encerrar a votação: \n\n %dº votante  OPC: ", i + 1);
  //     opc = getchar();
  //     clearBuffer();
  //     limpaTela();
  //
  //   } while(opc != '3');
  // }


}
