#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jour,mois,annee;
   printf(" entrer une date de format:jour\mois\annee");
   scanf("%d%d%d",&jour,&mois,&annee);
   if (mois<1 || mois>12){
    printf("mois invalide");
    return 1;
   }
   printf("%d",jour);
   if(mois==1){
    printf("janvier");
   }
   else if (mois==2){
    printf("fevrier");
   }
   else if (mois==3){
    printf("mars");
   }
   else if (mois==4){
    printf("avril");
   }
   else if (mois==5){
    printf("mai");
   }
   else if (mois==6){
    printf("juin");
   }
   else if (mois==7){
    printf("juillet");
   }
   else if (mois==8){
    printf("aout");
   }
   else if (mois==9){
    printf("septembre");
   }
   else if (mois==10){
    printf("octobre");
   }
   else if (mois==11){
    printf("novembre");
   }
   else if (mois==12){
    printf("decembre");
   }
printf("%d\n",annee);
    return 0;
}
