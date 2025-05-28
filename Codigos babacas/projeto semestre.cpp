#include<stdio.h>
#include<locale.h>


int main (){
	float nota1b1, nota2b1, nota3b1, bimestre1, semestre;
	float nota1b2, nota2b2, nota3b2, bimestre2;
	printf("----------calculadora de media do semestre----------\n\n");
	printf("Digite sua 1 nota do 1bimestre: \n");
	scanf("%f", &nota1b1);
	printf("Digite sua nota2 do 1bimestre: \n");
	scanf("%f", &nota2b1);
	printf("Digite sua nota3 do 1bimestre: \n");
	scanf("%f", &nota3b1);
	bimestre1 = (nota1b1 + nota2b1 + nota3b1)/3;
	printf("media do primeiro bimestre: %f \n\n", bimestre1);
	
	printf("Digite sua nota1 do 2bimestre: \n");
	scanf("%f", &nota1b2);
	printf("Digite sua nota2 do 2bimestre: \n");
	scanf("%f", &nota2b2);
	printf("Digite sua nota3 do 2bimestre: \n");
	scanf("%f", &nota3b2);
	bimestre2 = (nota1b2 + nota2b2 + nota3b2)/3;
	printf("media do segundo bimestre: %f \n\n", bimestre2);
	
	semestre = (bimestre1 + bimestre2)/2;
	
	printf("sua media do semestre e : %f\n", semestre);
	
	if (semestre >= 7.0) {
		printf("Voce esta Aprovado desgraçado");
	}
	else if(semestre >=4.0) {
		printf("Estude desgraçado voce esta de exame final");
	}
	else {
		printf("Voce esta reprovado desgraçado");
	}
	
		
		

	
}
