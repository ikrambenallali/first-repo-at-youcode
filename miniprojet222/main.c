#include <stdio.h>
#include <string.h>

int main()
{
    const int MAX_BOOKS = 1000;
    char titrelivre[MAX_BOOKS][50];
    char auteur[MAX_BOOKS][50];
    int prix[MAX_BOOKS];
    int quantitestock[MAX_BOOKS];
    int nbrlivres = 0;
    int choix;

    do {
        printf("1. Ajouter un livre au stock.\n");
        printf("2. Afficher tous les livres disponibles.\n");
        printf("3. Rechercher un livre par son titre.\n");
        printf("4. Mettre à jour la quantité d'un livre.\n");
        printf("5. Supprimer un livre du stock.\n");
        printf("6. Afficher le nombre total de livres en stock.\n");
        printf("Donnez votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                if (nbrlivres >= MAX_BOOKS) {
                    printf("Stock plein.\n");
                } else {
                    printf("Donnez le titre du livre : ");
                    scanf("%s", titrelivre[nbrlivres]);
                    printf("Donnez l'auteur : ");
                    scanf("%s", auteur[nbrlivres]);
                    printf("Donnez le prix du livre : ");
                    scanf("%d", &prix[nbrlivres]);
                    printf("Donnez la quantité en stock : ");
                    scanf("%d", &quantitestock[nbrlivres]);
                    nbrlivres++;
                }
                break;
            }
            case 2: {
                for (int i = 0; i < nbrlivres; i++) {
                    printf("Titre : %s, Auteur : %s, Prix : %d, Quantité en stock : %d\n",
                           titrelivre[i], auteur[i], prix[i], quantitestock[i]);
                }
                break;
            }
            case 3: {
                char titre[50];
                int trouve = 0;
                printf("Entrez le titre du livre : ");
                scanf("%s", titre);
                for (int i = 0; i < nbrlivres; i++) {
                    if (strcmp(titrelivre[i], titre) == 0) {
                        printf("Titre : %s, Auteur : %s, Prix : %d, Quantité en stock : %d\n",
                               titrelivre[i], auteur[i], prix[i], quantitestock[i]);
                        trouve = 1;
                        break;
                    }
                }
                if (!trouve) {
                    printf("Livre non trouvé !\n");
                }
                break;
            }
            case 4: {
                char titre[50];
                printf("Entrez le titre du livre à mettre à jour : ");
                scanf("%s", titre);
                for (int i = 0; i < nbrlivres; i++) {
                    if (strcmp(titrelivre[i], titre) == 0) {
                        printf("Entrez la nouvelle quantité : ");
                        scanf("%d", &quantitestock[i]);
                        printf("Quantité mise à jour.\n");
                        break;
                    }
                }
                break;
            }
            case 5: {
                char titre[50];
                printf("Entrez le titre du livre à supprimer : ");
                scanf("%s", titre);
                int i;
                for (i = 0; i < nbrlivres; i++) {
                    if (strcmp(titrelivre[i], titre) == 0) {
                        break;
                    }
                }
                if (i < nbrlivres) {
                    for (int j = i; j < nbrlivres - 1; j++) {
                        strcpy(titrelivre[j], titrelivre[j + 1]);
                        strcpy(auteur[j], auteur[j + 1]);
                        prix[j] = prix[j + 1];
                        quantitestock[j] = quantitestock[j + 1];
                    }
                    nbrlivres--;
                    printf("Livre supprimé.\n");
                } else {
                    printf("Livre non trouvé.\n");
                }
                break;
            }
            case 6: {
                int total = 0;
                for (int i = 0; i < nbrlivres; i++) {
                    total += quantitestock[i];
                }
                printf("Nombre total de livres en stock : %d\n", total);
                break;
            }
            case 7:
                printf("Au revoir !\n");
                break;
            default:
                printf("Option invalide !\n");
                break;
        }
    } while (choix != 7);

    return 0;
}
