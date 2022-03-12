#include "../headers/pile.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int size = 8;
  pile_t * maPile = NULL;
  initPile(&maPile,size);

  empiler(maPile,'a');
  empiler(maPile,'b');
  empiler(maPile,'c');
  empiler(maPile,'d');

  inversPile(maPile);
  
  libererPile(maPile);
  return 0;
}
