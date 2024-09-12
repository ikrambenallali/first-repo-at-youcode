#include <stdio.h>
#include <stdlib.h>

int main()
{

    int budget, destination, personnes;
printf("donner votre budget :");
scanf("%d", &budget);

printf("donner la destination ");
scanf("%d", &destination);
printf("donner le nombre de personnes : ");
scanf("%d", &personnes);
if (budget >= 1000) {
printf("Voyage haut de gamme");
} else if (budget >= 500 && budget < 1000) {
printf("Voyage moyen");
} else {

printf("Voyage économique");
}
if (destination == 1) {
if (budget >= 1000 && personnes > 2) {
printf("Plage");
} else {
printf("Les conditions ne sont pas remplies pour un voyage à la plage");
}
} else if (destination == 2) {
if (budget >= 500 && personnes <= 2) {
printf(" Montagne");
} else {
printf("Les conditions ne sont pas remplies pour un voyage à la montagne");
}
} else if (destination == 3) {
printf(" Ville");
} else {
printf("Destination invalide");
}
return 0;
}
