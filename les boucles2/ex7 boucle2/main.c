#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f1 = 0, f2 = 1, x;
    printf("Entrez le nombre de termes de la suite de Fibonacci: ");
    scanf("%d", &n);

    printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", f1);
        x = f1 + f2;
        f1 = f2;
        f2 = x;
    }

    return 0;
}
