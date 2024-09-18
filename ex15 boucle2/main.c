#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
   int  f = 1;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        f =f* i;
    }

    printf("La factorielle de %d est %d\n", n, f);

    return 0;
}
