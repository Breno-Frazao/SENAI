#include<stdio.h>
#include<windows.h>
struct Cliente{
	char nome[50];
	int idade;
	char email[50];
};
void main(){
	SetConsoleOutputCP(65001);
	struct Cliente cli;
	
	strcpy(cli.nome, "Joao da Silva");
	cli.idade = 18;
	strcpy(cli.email, "joao@email.com");
	
	printf("%s, %d, %s", cli.nome, cli.idade, cli.email );
	getch();
	
}