#include <stdio.h>
#include <stdlib.h>

int main()
{
     float salaire_base, salaire_total, prime, taux_horaire, salaire_supplementaire;
    int heures_supplementaires, type_poste;

    printf("Entrez votre salaire de base : ");
    scanf("%f", &salaire_base);

    printf("Entrez le nombre d'heures supplémentaires : ");
    scanf("%d", &heures_supplementaires);

    printf("Entrez votre type de poste  : ");
    scanf("%d", &type_poste);

    taux_horaire = salaire_base / 160;

    salaire_supplementaire = heures_supplementaires * taux_horaire * 1.5;

    if (type_poste == 1) {
        prime = salaire_base * 0.10;
    } else if (type_poste == 2) {
        prime = salaire_base * 0.20;
    } else {
        prime = 0;
        printf("Type de poste invalide.\n");
    }

    salaire_total = salaire_base + salaire_supplementaire + prime;

    printf("Le salaire total avec les primes est : %.2f ", salaire_total);

    return 0;
}
