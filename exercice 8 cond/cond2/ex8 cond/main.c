#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, historique_medical, type_couverture;


    printf("Entrez votre �ge : ");
    scanf("%d", &age);

    printf("Entrez votre historique m�dical  : ");
    scanf("%d", &historique_medical);

    printf("Entrez le type de couverture  : ");
    scanf("%d", &type_couverture);

    if (age < 30) {
        printf("Plan de base");
    } else {
        if (historique_medical == 0) {
            printf(" Plan de base");
        } else if (historique_medical >= 1) {
            printf(" Plan �tendu");
        }
    }

    if (historique_medical == 2) {
        printf("Couverture suppl�mentaire ajout�e pour les probl�mes majeurs");
    }
    return 0;
}
