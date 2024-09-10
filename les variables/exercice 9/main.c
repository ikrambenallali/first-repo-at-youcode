#include <stdio.h>
#include <stdlib.h>

int main()
{
  float x1,x2,y1,y2,z1,z2,d;
  printf("entrer touts les coordonnées:")  ;
  scanf("%f%f%f%f%f%f",&x1,&x2,&y1,&y2,&z1,&z2);
  d=sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
  printf("la distance entre les deux points:%f\n",d);
    return 0;
}
