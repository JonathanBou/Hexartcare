#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

Valeurs* stocker (Valeurs* vlist) // création des listes chianées
{

    FILE* fichier = NULL; // initialisation
    fichier = fopen("battements.csv","r");// ouverture du fichier

    if (fichier != NULL)// vérification
    {

        int temps= 0 ;

        int i = 0;
        int poul = 0 ;// utiliser pour chercher et mettre les valeurs dans le tableau
        while(fscanf(fichier,"%i ; %i",&vlist[i].poul, &vlist[i].temps)!=EOF)//stocker dans le tableau
            {
                i++;// avancer le tableau
            }

     fclose(fichier);// fermer le fichier

 }

 return vlist;

}
