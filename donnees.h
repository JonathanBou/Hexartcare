#ifndef DONNEES_H
#define DONNEES_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Valeurs Valeurs;
struct Valeurs
{
    int temps;
    int poul;
};

Valeurs* stocker ( int *size, Valeurs *vlist);


#endif // DONNEES_H

