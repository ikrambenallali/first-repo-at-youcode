#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;
    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);

    int original[n], copie[n];

    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément : ");
        scanf("%d", &original[i]);
        copie[i] = original[i];
    }
    printf("Éléments du tableau original : \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", original[i]);
    }

    printf("Éléments du tableau copié : \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", copie[i]);
    }
    return 0;
}
