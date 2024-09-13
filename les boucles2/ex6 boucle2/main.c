#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("donner la valeur de n:");
    scanf("%d",&n);
    printf("les facteurs de %d sont :",n);
    for (int i=1;i<=n;i++)
        if (n%i==0)
        printf("%d\n",i);
    return 0;
}
