#include <stdio.h>

void main(){
	//Laço
	int i = 0;
	while(i != 4){
		printf("Digite um número qualquer:\n");
		scanf("%d", &i);
	}
	printf("Fim");
	getch();
}