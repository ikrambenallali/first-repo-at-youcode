#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, facteur;

    printf("Entrez le nombre d'�l�ments : ");
    scanf("%d", &n);
    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);

    int tableau[n];

    for (int i = 0; i < n; i++) {
        printf("Entrez l'�l�ment %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Tableau apr�s multiplication : \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tableau[i] * facteur);
    }

    return 0;
}
