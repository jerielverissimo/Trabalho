#include "../include/votacao.h"


void setLingua(){

  #ifndef _WIN64
    setlocale(LC_ALL, "Portuguese");
  #endif

  #ifdef _WIN32
    setlocale(LC_ALL, "Portuguese");
  #endif

}
