#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("donner un nombre :");
    scanf("%d",&n);
    for(int i=1;i<=2*n;i=i+2){
        printf("%d",i);
    }
    return 0;
}
