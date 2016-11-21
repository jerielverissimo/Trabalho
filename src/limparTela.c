#include "votacao.h"

void limpaTela(){

    #ifdef linux
      printf("\e[H\e[2J");

    #endif

    #ifndef _WIN64
      system("cls");
    #endif

    #ifdef _WIN32
      system("cls");
    #endif

}
