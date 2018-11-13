#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

Valeurs* stocker ( int *size , Valeurs *vlist) // création des listes chianées
{

    FILE* fichier = NULL; // initialisation
    fichier = fopen("battements.csv","r");// ouverture du fichier
    if (fichier != NULL)// vérification
    {
        int temps, poul;// utiliser pour chercher et mettre les valeurs dans le tableau
        while(fscanf(fichier,"%i ; %i",&poul, &temps)!=EOF)
            {
            Valeurs v;// structure Valeurs
            v.poul = poul;// mémoriser poul dans la structure
            v.temps = temps;//mémoriser temps dans la structure
            vlist[*size] = v;// mettre la stucture dans le tableau
            (*size)++;// augmenter le size de 1
            }

     fclose(fichier);// fermer le fichier

 }
 return vlist;

}
