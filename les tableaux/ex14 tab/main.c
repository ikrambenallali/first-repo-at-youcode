#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s=0;
    float m;
    printf("donner nombre d'element: ");
    scanf("%d",&n);
    int tableau[n];
    printf("les elements de tableau ");
    for(int i=0;i<n;i++){
        scanf("%d",&tableau[i]);
        s=s+tableau[i];
    }
    m=s/n;
    printf("la moyenne est :%f",m);
    return 0;
}
