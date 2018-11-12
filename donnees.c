#include <stdio.h>
#include <stdlib.h>

OrdreCsv()
{
FILE* fichier = NULL;
    int caractereActuel = 0;

    fichier = fopen("battements.csv", "r");// On ouvre le fichier

    if (fichier != NULL)
    {
        printf ("Les pulsations sont les premires valeur, les deuxiemes sont le temps en ms\n");
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
        fclose(fichier);// on ferme le fichier
    }

}




