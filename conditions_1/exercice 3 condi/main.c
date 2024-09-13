#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
printf("donner les valeurs de a et b:");
scanf("%d%d",&a,&b);
if (a==b){
    printf("le triple de leur somme est :%d",3*(a+b));
}
else{
    printf("la somme est :%d",a+b);
}
    return 0;
}
