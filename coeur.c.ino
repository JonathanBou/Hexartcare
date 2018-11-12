//On inclut les headers
#include "param.h"
#include "coeur.h"

void loop() {
  int mode = 7 ;
  
  if (mode == 1){
    touteslesleds();
  }
  
  else if (mode == 2){
    uneledsurdeux();
  }
  
  else if (mode == 3){
    uneledsurtrois();
  }
  
  else if (mode == 4){
    choixled();
  }
  
  else if (mode == 5){
    chenillard();
  }
  
   else if (mode == 6){
    optionelun();
  }
  
  else if (mode == 7){
    optioneldeux();
  }
  
}
