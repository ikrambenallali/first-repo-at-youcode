#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
printf("donner un nombre:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("%d",2*i);
}
    return 0;
}
