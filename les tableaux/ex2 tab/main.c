#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrez le nombre d'�l�ments: ");
    scanf("%d", &n);
    int tableau[n];
    for (int i = 0; i < n; i++) {
        printf("Entrez l'�l�ment %d: ", i+1);
        scanf("%d", &tableau[i]);
    }
    printf("Les �l�ments du tableau sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }
    return 0;
}
