#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, p;

    printf("Entrez un nombre positif : ");
    scanf("%d", &n);
    for(int i = 0; i <= 10; i++)
    {
        p = n * i;
        printf("%d * %d = %d", n, i, p);
    }

    return 0;
}
