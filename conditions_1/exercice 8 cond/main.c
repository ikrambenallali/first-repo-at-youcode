#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m;
    printf("donner le moyenne de l'�leve:");
    scanf("%f",&m);
    if (m<10){
        printf("l'�leve est recal�");
    }
    else if (m<12){
        printf("passable");
    }
    else if (m>=12 && m<14){
        printf("assez bien");

    }
    else if (m>=14 && m<16){
        printf("bien");

    }
    else if (m>=16){
        printf("tres bien");
    }
    return 0;
}
