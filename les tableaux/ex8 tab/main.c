#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n;
    printf("Entrez le nombre d'�l�ments : ");
    scanf("%d", &n);

    int original[n], copie[n];

    for (int i = 0; i < n; i++) {
        printf("Entrez l'�l�ment : ");
        scanf("%d", &original[i]);
        copie[i] = original[i];
    }
    printf("�l�ments du tableau original : \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", original[i]);
    }

    printf("�l�ments du tableau copi� : \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", copie[i]);
    }
    return 0;
}
