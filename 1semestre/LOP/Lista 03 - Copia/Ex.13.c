#include <stdio.h>

void main(){
	//Laço
	int num;
	int fatorial = 1;
	printf("Digite um número inteiro e positivo\n");
	scanf("%d", &num);
	
	for(int i = 1; i <= num; i++){
		fatorial *= i;
	}printf("O fatorial de %d é %d\n", num, fatorial);
}