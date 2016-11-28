#include "../include/votacao.h"


void pausaTela () {

  #ifdef _WIN64
    system("pause");
  #endif

  #ifdef _WIN32
    system("pause");
  #endif

}
