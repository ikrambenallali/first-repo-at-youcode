#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a_remplacer, nouveau;

    printf("Entrez le nombre d'éléments: ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entrez l'élément à remplacer: ");
    scanf("%d", &a_remplacer);

    printf("Entrez la nouvelle valeur: ");
    scanf("%d", &nouveau);
    for (int i = 0; i < n; i++) {
        if (arr[i] == a_remplacer) {
            arr[i] = nouveau;
        }
    }

    printf("Tableau modifié: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
