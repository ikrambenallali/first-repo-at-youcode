#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 printf("donner le nombre des elements:");
 scanf("%d",&n);
 int tableau[n];
 printf("donner les elements du tableau:");
 for (int i=0;i<n;i++){
    scanf("%d",&tableau[i]);
 }
 printf("les elements pair:");
 for(int i=0;i<n;i++){
    if (tableau[i]%2==0)
        printf("%d",tableau[i]);
 }
    return 0;
}
