#include <stdio.h>
#include <stdlib.h>
    int factorielle(int n) {
    if (n == 0) return 1;
    return n * factorielle(n - 1);
}
int main() {
    int n = 5;
    printf("La factorielle de %d est %d\n", n, factorielle(n));
    return 0;
}
