#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

Valeurs* stocker ( int *size , Valeurs *vlist) // cr�ation des listes chian�es
{

    FILE* fichier = NULL; // initialisation
    fichier = fopen("battements.csv","r");// ouverture du fichier
    if (fichier != NULL)// v�rification
    {
        int temps, poul;// utiliser pour chercher et mettre les valeurs dans le tableau
        while(fscanf(fichier,"%i ; %i",&poul, &temps)!=EOF)
            {
            Valeurs v;// structure Valeurs
            v.poul = poul;// m�moriser poul dans la structure
            v.temps = temps;//m�moriser temps dans la structure
            vlist[*size] = v;// mettre la stucture dans le tableau
            (*size)++;// augmenter le size de 1
            }

     fclose(fichier);// fermer le fichier

 }
 return vlist;

}
