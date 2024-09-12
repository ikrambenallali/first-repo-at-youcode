#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, historique_medical, type_couverture;


    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre historique médical  : ");
    scanf("%d", &historique_medical);

    printf("Entrez le type de couverture  : ");
    scanf("%d", &type_couverture);

    if (age < 30) {
        printf("Plan de base");
    } else {
        if (historique_medical == 0) {
            printf(" Plan de base");
        } else if (historique_medical >= 1) {
            printf(" Plan étendu");
        }
    }

    if (historique_medical == 2) {
        printf("Couverture supplémentaire ajoutée pour les problèmes majeurs");
    }
    return 0;
}
