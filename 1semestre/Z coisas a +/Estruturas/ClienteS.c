#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
struct Cliente{
	char nome[50];
	int idade;
	char email[50];
};
void  main(){
	SetConsoleOutputCP(65001);
	srand(time(NULL));
	struct Cliente clis[5];
	
	strcpy(clis[0].nome, "Joaquim Silva");
	strcpy(clis[1].nome, "Osmar Mota");
	strcpy(clis[2].nome, "Paula Souza");
	strcpy(clis[3].nome, "Jacinto Pena");
	strcpy(clis[4].nome, "Ivone Hortega");
	strcpy(clis[0].email, "JoaquimSilva@email.com");
	strcpy(clis[1].email, "Osmar@email.com");
	strcpy(clis[2].email,  "Paula@email.com");
	strcpy(clis[3].email, "Jacinto@email.com");
	strcpy(clis[4].email, "Ivone@email.com");
	for(int i = 0; i < 5; i++){
		clis[i].idade = (rand() % 86) + 15;
		printf("%s, %d, %s\n", clis[i].nome, clis[i].idade, clis[i].email);
		
	}
					
	
								
	
	
}