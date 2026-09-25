#include <stdio.h>
#include <windows.h>
#include <conio.h>

// Função para calcular média
float media(int vetor[], int tamanho) {

    int soma = 0;

    for(int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    return (float)soma / tamanho;
}

void main() {
    SetConsoleOutputCP(CP_UTF8);

    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("A media é: %.2f\n", media(vetor, tamanho));

    getch();
}