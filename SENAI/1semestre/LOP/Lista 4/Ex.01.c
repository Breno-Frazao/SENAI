#include <stdio.h>
void main(){
	float imc, peso, altura;
	
	printf("digite seu peso\n");
	scanf("%f", &peso);
	printf("digite sua altura\n");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\nIMC - %.2f\n", imc);
	
	if(imc < 15.5){
		printf("abaixo do peso\n");
	}else if (imc >= 18,6 && imc <= 24.9){
		printf("peso normal\n");
	}else if (imc >= 25 && imc <= 29.9){
		printf("sobrepeso\n");
	}else if (imc >= 30 && imc <= 34.9){
		printf("Obesidade grau 1\n");
	}else if (imc >= 35 && imc <= 39.9){
		printf("Obesidade grau 2\n");
	}else if (imc >= 40){
		printf("Obesidade grau 3\n");
	}
	getch();
}