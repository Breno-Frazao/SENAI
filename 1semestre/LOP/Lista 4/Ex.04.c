#include <stdio.h>
void main(){
	float rendaHora, bancoHora, impostoRenda, INSS, sindicato, salarioL, salarioBruto;
	
	printf("informe o quanto voce ganha por hora\n");
	scanf("%f", &rendaHora);
	
	printf("informe seu banco de horas mensal\n");
	scanf("%f", &bancoHora);
	
	salarioBruto = rendaHora * bancoHora;
	impostoRenda = (salarioBruto * 11)/100;
	INSS = (salarioBruto *8)/100;
	sindicato = (salarioBruto *5)/100;
	
	salarioL = salarioBruto - impostoRenda - INSS- sindicato;
	
	printf("+ salarioBruto : R$.2f\n", salarioBruto);
	printf("- impostoRenda (11%):R$.2f\n",impostoRenda);
	printf("- INSS (8%):R$.2f\n", INSS);
	printf("= sindicato (5%): R$.2f\n", sindicato);
	printf("= salarioL:R$.2f\n", salarioL);
	
	getch();
}