#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,delta,x1,x2,x;
    printf("donner les valeurs de a b et c:");
    scanf("%f%f%f",&a,&b,&c);
    delta=pow(b,2)-4*a*c;
    if (delta==0){
      x=-b/(2*a);
      printf("la racine est :%f",x);
    }
    else if (delta>0){
        x1=-b-sqrt(delta)/2*a;
        x2=-b+sqrt(delta)/2*a;
        printf("les racines sont:%f%f",x1,x2);
    }
    else {

       printf("pas de racine dans R ");
    }
    return 0;
}
