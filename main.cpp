#include <iostream>
#include <boost/concept_check.hpp>
#include "reine.h"
#include "position.h"
#include "echequier.h"
int main(int argc, char **argv) {
  Reine r0;
  Reine r1(0,0);
  Reine r2(0,1);
  Echequier jeux16Cases(4);
  
  r0.afficherPosition();
  r1.afficherPosition();
  r2.afficherPosition();
    
  
 
  
    return 0;
}
