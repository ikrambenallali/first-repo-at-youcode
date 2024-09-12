#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,x,inv=0;
    printf("Entree un entier positif: ");
    scanf("%d",n);
    x=n;
    while(x>0){
        inv=inv*10+x%10;
        x/=10;
    }
    printf("l'inverce de %d est %d",inv);
    return 0;
}
