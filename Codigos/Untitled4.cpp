#include <stdio.h>
int main(){
 int a,b,c;
 printf("Digite o 1. N�mero: ");
 scanf("%d",&a);
 printf("\nDigite o 2. N�mero: ");
 scanf("%d",&b);
 printf("\nDigite o 3. N�mero: ");
 scanf("%d",&c);
 if (a > b)
    if (a > c)
       printf("\nO Maior e %d",a);
    else 
       printf("\nO Maior e %d",c);
 else 
    if (b > c)
       printf("\nO Maior e %d",b);
    else 
       printf("\nO Maior e %d",c);
}

