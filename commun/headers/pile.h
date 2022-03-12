#ifndef PILE_H
#define PILE_H

/*Structure*/
typedef struct pile{
  int taille;
  int nbelement;
  char * tab;  
} pile_t;

/*Fonction*/
int initPile(pile_t ** newPile, int taille) ;
void libererPile(pile_t * pile);
int estVidePile(pile_t * pile);
int estPleinePile(pile_t *pile);
int empiler(pile_t * pile, char ajout);
int depiler(pile_t * pile, char * element);
void affichPile(pile_t * pile);
void inversPile(pile_t * pile);

#endif



