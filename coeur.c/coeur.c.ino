//On inclut les headers
#include "param.h"
#include "coeur.h"

void loop() {
  if (mode == 0){
    //Il n'y a pas de led alumé
  }
  
  else if (mode == 1){
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
  else if (mode == 8){
    optioneltrois();
  }
  else if (mode == 9){
    optionelquatre();
  }
}
