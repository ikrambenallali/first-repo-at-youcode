#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n, somme = 0;
    printf("Entrez le nombre d'�l�ments: ");
    scanf("%d", &n);

    int tableau[n];

    for (int i = 0; i < n; i++) {
        printf("Entrez l'�l�ment %d: ", i+1);
        scanf("%d", &tableau[i]);
        somme += tableau[i];
    }

    printf("La somme des �l�ments est: %d\n", somme);
    return 0;
}
