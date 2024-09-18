#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x=0;
    float s= 0;

    printf("Entrez une série de nombres :\n");
    do {
        scanf("%d", &n);
        if (n != 0) {
            s =s+ n;
            x++;
        }
    } while (n!= 0);

    if (x > 0)
        printf("Moyenne : %f\n", s / x);
    else
        printf("Aucun nombre entré.\n");

    return 0;
}
