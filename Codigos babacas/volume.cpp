#include <stdio.h>
#include <math.h>

int main (){
	float raio, volume;
	printf("Digite o raio :");
	scanf("%f", &raio);
	volume = 4 * M_PI * pow(raio, 3) / 3;
	printf("O volume e %g cm cubicos \n", volume );
	
}
