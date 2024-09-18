#include <stdio.h>
#include <stdlib.h>


    int somme(int a,int b){
    return a+b;
}
int main(){
int a,b;
printf("donner la valeur de a et b :");
scanf("%d%d",&a,&b);
printf("%d+%d=%d",a,b,somme(a,b));
    return 0;
}
