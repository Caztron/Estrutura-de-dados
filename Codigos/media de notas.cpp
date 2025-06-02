#include<stdio.h>

int main () {
    float nota1, nota2, nota3;
    printf("\n Digite sua primeiro nota:\t");
    scanf("%f", &nota1);
    printf("\n Digite sua segunda nota:\t");
    scanf("%f", &nota2);
    printf("\n Digite sua terceira nota:\t");
    scanf("%f",&nota3);
    printf("\n\n Sua media \t %6.2f", (nota1+nota2+nota3)/3 ); 
    

}
