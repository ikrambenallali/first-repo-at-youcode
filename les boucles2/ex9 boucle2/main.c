#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b, x= 1;

    printf("Entrez la base: ");
    scanf("%d", &a);
    printf("Entrez l'exposant: ");
    scanf("%d", &b);

    while (b>0) {
        x *= a;
        b--;
    }

    printf("Le résultat est %d\n", x);
    return 0;
}
