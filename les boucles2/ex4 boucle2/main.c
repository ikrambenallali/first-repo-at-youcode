#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, inverse = 0,reste;
    printf("Entrez un entier: ");
    scanf("%d", &n);
printf("l'inverse est :");
    while (n != 0) {
            reste=n%10;
        printf("%d",reste);
        n /= 10;
    }
    return 0;
}
