#include "../include/votacao.h"

void votacaoSecreta(){

  setLingua();

  Voto votos;

  int nVotantes, i;
  char opc;


  printf(" Insira o total de votantes: ");
  scanf("%d", &nVotantes);
  clearBuffer();
  limpaTela();

  for (i = 0; i < nVotantes; i++) {

    do {

      printf("\n\n [1] - Voto sim: \n [2] - Voto não: \n [3] - Encerrar a votação: \n\n %dº votante  OPC: ", i + 1);
      opc = getchar();
      clearBuffer();
      limpaTela();

      switch (opc) {
        case '1':
          votos.vSim++;
          break;
        case '2':
          votos.vNao++;
          break;
        case '3':
          limpaTela();
          encerrarVotacaoSecreta(votos, nVotantes);
            i = nVotantes;
          break;
        default:
          printf("\n Por favor selecione uma opção válida! \n");
      }
    } while(opc != '1' && opc != '2' && opc != '3');

    limpaTela();

  }

  encerrarVotacaoSecreta(votos, nVotantes);


}

void encerrarVotacaoSecreta(Voto votos, int votantes){

  int votacaoValida = 1;
  float votosValidos = 0;

  votos.tVotos = votos.vSim + votos.vNao;
  votos.abestencoes = votantes - votos.tVotos;
  votosValidos = (float) ((float) votos.tVotos / (float) votantes) * 100;

  (votosValidos >= 50 + 1) ? votacaoValida = 0 : votacaoValida;

  printf("\t\t+-----------------------------------------------+\n");
  printf("\t\t|\t\t\t\t\t\t|\n");
  printf("\t\t|\t     Resultado da votação \t\t|\n");
  printf("\t\t|\t\t\t\t\t\t|\n");
  printf("\t\t+-----------------------------------------------+\n");

  printf("\n\t\t\t Quantidade de sim: \t\t%2d", votos.vSim);
  printf("\n\t\t\t Quantidade de não: \t\t%2d", votos.vNao);
  printf("\n\t\t\t Abestenções: \t\t\t%2d", votos.abestencoes);
  printf("\n\t\t\t Votantes: \t\t\t%2d", votantes);

  if (votacaoValida == 0) printf("\n\n\t votação válida!\n");
  else printf("\n\n\t votação inválida, votos insuficientes!\n");

  if (votos.vSim > votos.vNao) printf("\t Hove maioria para sim\n\n");
  else if (votos.vNao > votos.vSim) printf("\t Hove maioria para não\n\n");
  else printf("\t Hove empate entre sim e não\n\n");

  printf("--------------------------------------------------------------------------------\n");

  pausaTela(); // windows


}
