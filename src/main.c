#include "../include/votacao.h"


void menuVotacao(){

  char opc, flag = 1;

  do {

    if (flag) {
      limpaTela();
    }

    printf("\t\t+-----------------------------------------------+\n");
    printf("\t\t|\t\t\t\t\t\t|\n");
    printf("\t\t|\t\t Menu Vota��o \t\t\t|\n");
    printf("\t\t|\t\t\t\t\t\t|\n");
    printf("\t\t+-----------------------------------------------+\n");

    printf("\n\n\n");
    printf("--------------------------------------------------------------------------------\n\n");
    printf(" [0] - Vota��o Secreta\n");
    printf(" [1] - Vota��o Aberta\n");
    printf(" [2] - Voltar ao menu anterior\n\n");

    printf(" OPC: ");

    opc = getchar();
    clearBuffer();

    switch (opc) {
      case '0':
        limpaTela();
        votacaoSecreta();
        break;
      case '1':
        limpaTela();
        votacaoAberta();
        break;
      case '2':
        limpaTela();
        menuPrincipal();
        break;
      default:

        printf("\n Por favor selecione uma op��o v�lida! \n");
        // sleep(3);
    }
  } while(opc != '0' && opc != '1' && opc !=  '2');
}


void menuPrincipal(){

  char opc, flag = 0;

  limpaTela();

  do {

    if (flag) {
      limpaTela();
    }

    printf("\t\t+-----------------------------------------------+\n");
    printf("\t\t|\t\t\t\t\t\t|\n");
    printf("\t\t|\t\t Menu Principal \t\t|\n");
    printf("\t\t|\t\t\t\t\t\t|\n");
    printf("\t\t+-----------------------------------------------+\n");

    printf("\n\n\n");
    printf("--------------------------------------------------------------------------------\n\n");
    printf(" [0] - Iniciar Programa\n");
    printf(" [1] - Sair do Programa\n\n");

    printf(" OPC: ");

    opc = getchar();
    clearBuffer();

    switch (opc) {
      case '0':
        limpaTela();
        menuVotacao();
        break;
      case '1':
        exit(0);
        break;
      default:

        printf("\n Por favor selecione uma op��o v�lida! \n");

        // sleep(3);
    }
  } while(opc != '0' && opc != '1');
}


int main(int argc, char const *argv[]) {

  setLingua();

  menuPrincipal();

  return 0;
}
