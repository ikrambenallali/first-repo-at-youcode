#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ra,sc,dp;
    printf("donner le revenu annuel:");
    scanf("%f",&ra);
    printf("donner le score de credit:");
    scanf("%f",&sc);
    printf("donner la dure de pret:");
    scanf("%f",&dp);
    if(ra>=30000 && sc>=700 && dp<=10){
        printf("eligible");
    }
    else if (ra>=30000 && sc>=650 && dp<=15) {
        printf("eligible");
    }
    else if (ra<30000  && sc<650 && dp>15){
        printf("non eligible");
    }
    return 0;
}
