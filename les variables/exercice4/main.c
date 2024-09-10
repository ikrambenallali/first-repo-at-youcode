#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kmh,ms;
   printf("donner la vitesse en km/h:");
   scanf("%f",&kmh);
   ms = kmh * 0.27778;
   printf("la vitesse en m/s:%f\n",ms);
    return 0;
}
