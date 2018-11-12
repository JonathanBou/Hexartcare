#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "actions.h"
menu()
{
int choix;
    int i =1;
    while (i!=0)// sert à refaire un choix
    {
        printf("Choisit une fonctionnalites qui se trouve dans la liste suivante:\n");
        printf ("1 - Les donnees dans l ordre du fichier .csv\n");
        printf("2 - Les donnees en ordre croissant selon le pouls\n");
        printf("3 - Chercher une donnees\n");
        printf("4 - La moyenne de pouls dans une plage de temps donne\n");
        printf("5 - Le nombre de lignes de données actuellement en memoire\n");
	    printf("6 - La valeur maximale de pouls\n");
        printf("7 - La valeur minimale de pouls\n");
        scanf ("%i",&choix);// demande d'un choix à l'utilisateur
        switch (choix)//remplace des if successif
        {
            case 1:
                OrdreCsv();
                break;

            case 2:
                break;

            case 3:
                break;

             case 4:
                break;

             case 5:
                break;

             case 6:
                break;

             case 7:
                break;

            default: // Permet de respecter les nombres dans les choix
                printf("Valeur invalide.\n");
                break;



        }
        printf("Continuer =1\n");
        printf("Quitter =0\n");
        scanf("%i",&i);// Savoir si on veut refaire un choix
    }
}
