#include <stdio.h>
#include <stdlib.h>

int main()
{
     int age, annees_cotisation;
    float montant_epargne, bonus = 0.0;

    printf("Entrez votre �ge: ");
    scanf("%d", &age);
    printf("Entrez vos ann�es de cotisation: ");
    scanf("%d", &annees_cotisation);
    printf("Entrez le montant total �pargn� (en euros): ");
    scanf("%f", &montant_epargne);
    if (montant_epargne > 50000) {
        bonus = ((montant_epargne - 50000) / 10000) * 0.05 * montant_epargne;
        montant_epargne += bonus;
    }

    if (age >= 65) {
        if (annees_cotisation >= 30 && montant_epargne >= 100000) {
            printf("Vous �tes �ligible au plan complet avec pension ");
        } else if (annees_cotisation >= 20 && montant_epargne >= 50000) {
            printf("Vous �tes �ligible au plan partiel avec pension moyenne");
        } else {
            printf("Vous ne remplissez pas les crit�res pour un plan de retraite.");
        }
    } else {
        printf("Le plan �pargne n'est pas encore disponible pour les personnes de moins de 65 ans.");
    }
    return 0;
}
