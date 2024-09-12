#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, sum = 0;
printf("Entrez un nombre: ");
scanf("%d", &n);
for(int i = 1; i <= n; i++) {
sum += i;
}
printf("La somme des %d premiers nombres est %d\n", n, sum);
    return 0;
}
