#include <stdio.h>
#include <stdlib.h>

int main()
{
    float revenu,statut,deductions,impots;
    printf("donner le revenu annuel:");
    scanf("%f",&revenu);
    printf("donner le statut fiscal:");
    scanf("%f",&statut);
    printf("donner la deductions");
    scanf("%f",&deductions);

    if(statut==1)
    deductions=deductions+1000;
    else if (statut==2)
        deductions=deductions+2000;
    else if (statut==3)
        deductions=deductions+3000;
        revenu=revenu-deductions;
        if(revenu<=20000)
            impots=revenu*0.05;
        else if (revenu>20000 && revenu<=50000)
            impots=revenu*0.10;
        else if (revenu>50000)
            impots=revenu*0.20;
            printf("l'impots a payer est:%f",impots);

    return 0;
}
