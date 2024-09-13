#include <stdio.h>
#include <stdlib.h>

int main()
{
char c;
printf("donner le caractere c:");
scanf("%c",&c);
switch(c){
case 'a':
case'e':
case'i':
case'o':
case'u':
case'y':
    printf("%c est une voyelle",c);
    break;
default:
    printf("%c n'est pas une voyelle",c);





}
    return 0;
}
