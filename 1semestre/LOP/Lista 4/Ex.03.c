#include <stdio.h>

void main(){
	float total,precoproduto,quantidade,resp;
	printf("Digite o preco produto:\n");
	scanf("%f",&precoproduto);
	printf("digite a quantidade:\n");
	scanf("%f",&quantidade);
	
	total = total + precoproduto * quantidade;
	printf("Mias algum produto????\n");
	scanf("%f",&resp);
	if("Sim"){
		printf("digite o preco produto:\n");
		scanf("%f", &precoproduto);
		
		total = total + (precoproduto * quantidade);
		printf("o total do seu orçamento é:%.2f", total);
		
	}else if("nao"){
		printf("o total do seu orçamento é: %.2f",total);
	}
	getch();
}