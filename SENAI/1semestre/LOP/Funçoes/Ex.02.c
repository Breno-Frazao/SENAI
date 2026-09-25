#include <stdio.h>
#include <windows.h>
#include <conio.h>

// Função para calcular fatorial
int fatorial(int n) {
    int resultado = 1;

    for(int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

void main() {
    SetConsoleOutputCP(CP_UTF8);

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("O fatorial de %d é %d\n", numero, fatorial(numero));

    getch();
}