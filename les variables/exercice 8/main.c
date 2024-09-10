#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,mg;
    printf("entrer les trois nombres:");
    scanf("%f %f %f",&a,&b,&c);
    mg=pow(a*b*c,1/3);
    printf("le moyenne geometrique est :%f\n",mg);
    return 0;
}
