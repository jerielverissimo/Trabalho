#include "../include/votacao.h"

void clearBuffer(){

  #ifdef linux
    __fpurge(stdin);
  #endif

  #ifdef _WIN64
    fflush(stdin);
  #endif

  #ifdef _WIN32
    fflush(stdin);
  #endif

}
