#ifndef PILE_H
#define PILE_H

/*Structure*/
typedef struct pile{
  int taille;
  int nb_element;
  char * base;  
} pile_t;

/*Fonction*/
int InitPile(pile_t ** newPile, int taille) ;
void LibererPile(pile_t * pile);
int PileVide(pile_t * pile);
int PilePleine(pile_t *pile);
int Empiler(pile_t * pile, char ajout);
int Depiler(pile_t * pile, char * element);
void AffichePile(pile_t * pile);
void InversePile(pile_t * pile);

#endif



