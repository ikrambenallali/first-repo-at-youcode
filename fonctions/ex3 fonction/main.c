#include <stdio.h>
#include <stdlib.h>
int maximum(int a,int b){
if (a<b)
    printf("le maximum est %d",b);
else

    printf("le maximum est %d",a);}
int main()
{
   int a,b;
printf("donner la valeur de a et b");
scanf("%d%d",&a,&b);
printf("le maximum est %d",a,b,maximum(a,b));
    return 0;
}
