#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
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

CompatageLigne()
{
	FILE *fichier;

	int NbrLigne=0;// nombre de lignes
	char saisie;

	fichier = fopen("battements.csv","r");// on ouvre le fichier
	if (fichier != NULL)// verification
        {
		while ((saisie = getc(fichier)) != EOF)//tant que ce n'est pas EOF (la fin du fichier )
            {
            if (saisie == '\n')// regarde si il y a un retour à la ligne
                {
                ++NbrLigne;// permet de conteur de ligne
                }

            }
        }

	fclose(fichier);// ferme le fichier

   printf ("Nombre de lignes %d \n", NbrLigne); // affiche le nombre de ligne

    return NbrLigne;

}





