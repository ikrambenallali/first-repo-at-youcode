#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;
    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);

    int tableau[n];
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d: ", i+1);
        scanf("%d", &tableau[i]);
    }
    int min = tableau[0];


    for (int i = 1; i < n; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    printf("Le minimum est: %d\n", min);

    return 0;
}
