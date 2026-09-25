#include <stdio.h>
#include <windows.h>
#include <conio.h>

// Função para ordenar array
void ordenar(int vetor[], int tamanho) {

    int aux;

    for(int i = 0; i < tamanho; i++) {

        for(int j = i + 1; j < tamanho; j++) {

            if(vetor[i] > vetor[j]) {

                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
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

    ordenar(vetor, tamanho);

    printf("\nArray ordenado:\n");

    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    getch();
}