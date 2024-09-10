#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,v;
    printf("donner le rayon du sphére:");
    scanf("%f",&r);
    float pi=3.14;
    v=(4/3)*pi*pow(r,3);
    printf("le volume de sphére est :%f\n",v);
    return 0;
}
