#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("donner le nombre n:");
    scanf("%d",&n);
    for(int i=10;i>=1;i--)
        printf("%d*%d=%d",n,i,n*i);
    return 0;
}
