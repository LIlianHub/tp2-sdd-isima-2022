#ifndef FILE_H
#define FILE_H

//Structure
typedef struct file{
    int taille;
    int nb_element;
    int deb;
    char * base;
} file_t;

//Fonction
int InitFile(file_t ** newFile, int taille);
void LibererFile(file_t * aLiberer);
int FilePleine(file_t * maFile);
int FileVide(file_t * maFile);
int Enfiler(file_t * maFile, char ajout);
int Defiler(file_t * maFile, char * element);
void AfficheFile(file_t * aAfficher);


#endif
