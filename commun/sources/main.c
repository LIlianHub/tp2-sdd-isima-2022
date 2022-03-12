#include "../headers/pile.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int size = 8;
  pile_t * maPile = NULL;
  InitPile(&maPile,size);

  Empiler(maPile,'a');
  Empiler(maPile,'b');
  Empiler(maPile,'c');
  Empiler(maPile,'d');

  InversePile(maPile);
  
  LibererPile(maPile);
  return 0;
}
