#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,yards;
    printf("donner la distance en km: ");
    scanf("%f",&km);
    yards=km*1093.61;
    printf("la distance en yards :%f\n",yards);
    return 0;
}
