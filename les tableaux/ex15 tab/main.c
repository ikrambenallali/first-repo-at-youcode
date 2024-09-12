#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N1,N2,i;
    printf("Entree le nombre d'elements du tableau 1: ");
    scanf("%d",&N1);

    printf("Entree le nombre d'elements du tableau 2: ");
    scanf("%d",&N2);
    int tab1[N1],tab2[N2],tabt[N1+N2];

    printf("Entree les elements du tableau 1: ");
    for(i=0;i<N1;i++)
        scanf("%d",&tab1[i]);

    printf("Entree les elements du tableau 2: ");
    for(i=0;i<N2;i++)
        scanf("%d",&tab2[i]);


    for(i=0;i<N1;i++)
        tabt[i]=tab1[i];
    for(int j=0;i<N1+N2;i++,j++)
        tabt[i]=tab2[j];

    for(i=0;i<N1+N2;i++)
        printf("%d ",tabt[i]);

    return 0;
}
