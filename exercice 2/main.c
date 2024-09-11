#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age ,tv,nac;
    float prime_de_base,prime;
    printf("donner l'age de conducteur");
    scanf("%d",&age);
    printf("entrer le type de voiture:");
    scanf("%d",&tv);
    printf("donner le nombre d'accidents:");
    scanf("%d",&nac);
    printf("entrer le prime de base:");
    scanf("%f",&prime_de_base);
    if (age<25 ){
        prime=prime de base *1.5;
    }
    else if (age>=25 && age<=65){
        prime=prime_de_base ;
    }
    else if (age>65){
        prime=prime_de_base*1.2;
    }
    if(tv==1){
        prime=prime*2;
    }
    else if (tv==2){
        prime=prime*1.2;
    }
    else if (tv==3){
        prime=prime*1.1;
    }
if(nac>1){
    prime=prime*1.3;
}
printf("la prime est:%f,prime");
    return 0;
}
