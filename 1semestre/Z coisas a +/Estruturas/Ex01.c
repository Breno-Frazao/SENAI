#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

struct Produto{
    char nome[50];
    float preco;
    int quantidade;
};
void main(){
    struct Produto mP = {"Smartphone", 1499.99, 10};

    float valorTotal = mP.preco * mP.quantidade;

    printf("== Informações do Produto ==\n");
    printf("Nome: %s\n", mP.nome);
    printf("Preco unitário: R$ %.2f\n", mP.preco);
    printf("Quantidade em estoque: %d unidades\n", mP.quantidade);
    printf("Valor total em estoque: R$ %.2f\n", valorTotal);

    getch();
}