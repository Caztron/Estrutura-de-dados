#include<stdio.h>

int main() {
	float peso, altura, imc;
	
	printf("-----------Calculadora de IMC-----------\n");
	printf("Digite seu peso em quilogramas (kg): \n");
	scanf("%f", &peso);
	printf("digite sua altura em metros(m): \n");
	scanf("%f", &altura);
	imc = peso / (altura*altura);
	printf("-----------------------------------\n\n");
	printf("Seu IMC e'%.2f\n", imc);
	
	printf("\n\n-----------Classificacao-----------\n\n");
	
	if (imc<18.5){
		printf("Voce esta abaixo do peso normal");
	}
	else if(imc>=18.5 && imc<=24.9){
		printf("Voce esta com o peso normal");
	}
	else if(imc>25 && imc<=29.9){
		printf("Voce esta com sobrepeso");
	}
	else if(imc>30 && imc<=34.9){
		printf("Voce esta com Obesidade grau I");
	}
	else if(imc>35 && imc<=39.9){
		printf("Voce esta com Obesidade grau II (severa)");
	}
	else if(imc>40 && imc<=40){
		printf("Voce esta com Obesidade grau III (morbida)");
	}
	else {
		printf("Voce nem existe ou esta morto");
	}
	
	return 0;
}
