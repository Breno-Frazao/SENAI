#include <stdio.h>

void main(){
	float peso, excesso, limite = 50, multa = 4;
	printf("digite o peso da pesca:\n");
	scanf("%f", &peso);
	if(peso > 50){
		exceso = peso - limite;
		multa = excesso * 4;
		printf("voce excedeu o limite em %.2f quilos, \n", excesso);
		printf("pagara uma multa de %.2f", multa);
	}else{
		printf("voce nao excedeu o limite de 50 quilos.");
	}
	getch();
}