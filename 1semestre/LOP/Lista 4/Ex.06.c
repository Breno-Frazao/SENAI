#include<stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int area;
	float galao = 25, lata = 80;
	float litroGalao = 3.6, litrolata = 18;
	//q litro pinta 6m2
	printf("informe a area em m2 a ser pintada:\n");
	scanf("%d", &area);
	if(area < (litroGalao * 6)){
		prntf("voce precisa de 1 galao R$ %.2f", galao);
	}else if(area < (litroGalao * 6 * 5)){
		galoes = area / (litroGalao * 6) + 1;
		preco = galoes * galao;
		printf("voce precisa de %d galao R$ %.2f", galoes, preco);
		
	}
	getch();
}