#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score, anciennete, recompenses;
float score_final;
printf("donner le score de performance :");
scanf("%d", &score);
printf("donner le anciennet� en ann�es : ");
scanf("%d", &anciennete);
printf("donner le nombre de r�compenses re�ues  :");
scanf("%d", &recompenses);
if (recompenses == 1) {
score_final = 1.1;
} else if (recompenses >= 2) {
score_final = 1.2;
}
if (score_final >= 90 && anciennete >= 5) {
printf(" Excellente");
} else if (score_final >= 75 && anciennete >= 3) {
printf(" Bonne");
} else if (score_final >= 50 && anciennete < 3) {

printf(" Satisfaisante");
} else if (score_final < 50) {
printf(" Insuffisante");
}
    return 0;
}
