#include <stdio.h>

void main(){
	float pp, excesso = 0, multa = 0;
	printf("digite o pp:\n");
	scanf("%f", &pp);
	
	excesso = pp-50;
	multa = excesso *4;
	
	if(pp>50);
	printf("o valor da multa sera de %.2f", multa);
	if(pp <= 50);
	printf("nao ha multa a ser paga");
	
	getch();
}