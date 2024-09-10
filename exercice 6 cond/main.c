#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("donner la valeur de a:");
    scanf("%f",&a);
    if(a>0){
        printf("le nombre est positive ");
    }
    else if (a<0){
       printf("le nombre est negative") ;

    }
    else {
        printf("le nombre est nul");
    }
    return 0;
}
