#include <stdio.h>
#include <stdlib.h>

int main(){
	float pol, cm;
	printf("digite um valor de polegadas\n");
	scanf("%f", &pol);
	cm = pol*2.54;
	printf("Temos  %f  cm\n," cm);
	system("pause");
	return EXIT_SUCCESS;
}
