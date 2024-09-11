#include <stdio.h>
#include <stdlib.h>

int main()
{
   int jours_accordes, jours_utilises, statut;
int jours_restants;
printf("donner le nombre total de jours de congés accordés :");
scanf("%d",&jours_accordes);

printf("donner le nombre de jours de congés utilisés :");
scanf("%d",&jours_utilises);

printf("donner le statut de lemployé :");
scanf("%d",&statut);
if (statut == 1) {
jours_restants = jours_accordes - jours_utilises;
} else if (statut == 0) {
jours_restants = (jours_accordes / 2) - jours_utilises;
} else {
printf("Statut invalide");
return 1;
}
if (jours_restants < 0) {
printf("Vous avez dépassé vos jours de congé !");
} else {
printf("Il vous reste %d jours de congé", jours_restants);
}
    return 0;
}
