#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int jour;
srand(time(NULL));
jour=rand()%7;
if (jour==0){
    printf("lundi");
}
else if (jour==1){
    printf("mardi");
}
else if (jour==2){
    printf("mercredi");
}
else if (jour==3){
    printf("jeudi");
}
else if (jour==4){
    printf("vendredi");
}
else if (jour==5){
    printf("samedi");
}
else if (jour==6){
    printf("dimanche");
}
    return 0;
}
