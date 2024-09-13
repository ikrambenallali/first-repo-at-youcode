#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,x;
   printf("donner la valeur de a:") ;
   scanf("%d",&a);
   printf("donner la valeur de b:");
   scanf("%d",&b);
   for(int i=1; i<=b;i++){
    x=a^b;
   }
   printf("%d^%d=%d",a,b,x);
    return 0;
}
