#include <stdio.h>
#include <stdlib.h>
int minimum(int a,int b){
if (a<b)
    printf("le minimum est %d",a);
else

    printf("le minimum est %d",b);}
int main()
{
   int a,b;
printf("donner la valeur de a et b");
scanf("%d%d",&a,&b);
printf("le minimum est %d",a,b,minimum(a,b));

    return 0;
}
