#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("donner le caractere :");
    scanf("%c",&c);
    if (c>='A' && c<='Z'){
        printf("le caractere est majuscule");

    }
    else {
        printf("le caractere est miniscule");
    }
    return 0;
}
