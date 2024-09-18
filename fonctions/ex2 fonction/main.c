#include <stdio.h>
#include <stdlib.h>
int produit(int a,int b){
return a*b;
}
int main()
{
    int  a,b;
    printf("donner la valeur de a et b :");
    scanf("%d%d",&a,&b);
    printf("%d*%d=%d",a,b,produit(a,b));
    return 0;
}
