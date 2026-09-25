#include <stdio.h>
#include <windows.h>
#include <conio.h>

// Função para verificar se é primo
int primo(int n) {

    if(n <= 1) {
        return 0;
    }

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }

    return 1;
}

void main() {
    SetConsoleOutputCP(CP_UTF8);

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(primo(numero)) {
        printf("O numero %d é primo.\n", numero);
    } else {
        printf("O numero %d nao é primo.\n", numero);
    }

    getch();
}