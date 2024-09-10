#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("donner c :");
    scanf("%c",&c);
    if(c>65 && c<90){
        printf("c est majuscule");

    }
    else if (c>97 && c<122){
        printf("c est miniscule");
    }
    else {
        printf("c n'est pas un alphabet");
    }
    return 0;
}
