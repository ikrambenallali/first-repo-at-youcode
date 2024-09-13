#include <stdio.h>
#include <stdlib.h>

int main()
{

   int n,prm;
printf("donner la valeur de n:");
scanf("%d",&n);
printf("les nombres premiers de 1 a %d\n",n);

for (int i=2;i<=n;i++){
        prm=1;
for(int j=2;j<i;j++)
if(i%j==0)
prm=0;
if(prm==1)
 printf("%d",i);}
    return 0;

}
