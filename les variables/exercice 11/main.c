#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lg,lr,s;
    printf("donner la longeur de rectangle:");
    scanf("%f",&lg);
    printf("donner la largeur de rectangle:");
    scanf("%f",&lr);
    s=lg*lr;
    printf("la surface est :%f\n",s);
    return 0;
}
