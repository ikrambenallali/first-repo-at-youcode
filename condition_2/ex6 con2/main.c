#include <stdio.h>
#include <stdlib.h>

int main()
{
    float consommation,type_dutilisateur,type_contrat,facteur,prix_kWh;
    printf("donner la consommation de l'electricité:");
    scanf("%f",&consommation);
    printf("donner le type d'utilisateur:");
    scanf("%f",&type_dutilisateur);
    printf("donner le type de contrat :");
    scanf("%f",&type_contrat);
    if (type_dutilisateur==1 )
    if(type_contrat==0)
    prix_kWh=0.20;

    else
      prix_kWh=0.15;

    if(type_dutilisateur==2)
        if(type_contrat==0)
     prix_kWh=0.30;

    else
     prix_kWh=0.25;

    facteur=consommation*prix_kWh;
    if (consommation>500)
        facteur=facteur+0.1;

    printf("votre facteur est:%f",facteur);

    return 0;
}
