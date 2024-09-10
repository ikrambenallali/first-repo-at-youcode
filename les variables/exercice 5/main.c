#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperature;
    printf("donner la temperature en celsius:");
    scanf("%f",&temperature);
    if (temperature < 0){
        printf("etat:solide\n");
    }
    else if (temperature>=0  && temperature <100)
    {
        printf("etat : liquide\n");
    }else{
    printf("etat:gaz\n");
    }

    return 0;
}
