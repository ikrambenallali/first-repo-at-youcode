#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, s= 0;

    printf("Entrez un nombre : ");
    scanf("%d", &n);

    printf("Table de multiplication de %d :\n", n);
    for (int i = 1; i <= 10; i++) {
        int p= n * i;
        printf("%d x %d = %d\n", n, i, p);
        s =s+ p;
    }

    printf("Somme des produits : %d\n", s);

    return 0;
}
