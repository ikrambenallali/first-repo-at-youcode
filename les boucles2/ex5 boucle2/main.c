#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,s;
  printf("donner la valeur de n:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    s=s+i;
  printf("la somme des %d premiers nombres est :%d ",n,s);
    return 0;
}
