#include <stdio.h>
#include <stdlib.h>
int parite(int n) {
    return (n % 2 == 0) ? 1 : 0;
}

int main() {
    int n = 9;
    if (parite(n))
        printf("%d est pair\n", n);
    else
        printf("%d est impair\n", n);
    return 0;
}
