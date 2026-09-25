#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

void main() {
    struct Produto meuProduto = {"Smartphone", 1499.99, 10};

    printf("=== Informacoes do Produto ===\n");
    printf("Nome: %s\n", meuProduto.nome);
    printf("Preco: R$ %.2f\n", meuProduto.preco);
    printf("Quantidade em estoque: %d\n", meuProduto.quantidade);

    getch();
}