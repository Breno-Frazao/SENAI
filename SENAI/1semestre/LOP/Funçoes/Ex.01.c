#include <stdio.h>
#include <windows.h>
#include <conio.h>

// Procedimento de soma
void soma(float a, float b) {
    printf("Resultado da soma: %.2f\n", a + b);
}

// Procedimento de subtração
void subtracao(float a, float b) {
    printf("Resultado da subtracao: %.2f\n", a - b);
}

// Procedimento de multiplicação
void multiplicacao(float a, float b) {
    printf("Resultado da multiplicacao: %.2f\n", a * b);
}

// Procedimento de divisão
void divisao(float a, float b) {
    if(b != 0) {
        printf("Resultado da divisao: %.2f\n", a / b);
    } else {
        printf("Erro: divisao por zero!\n");
    }
}

void main() {
    SetConsoleOutputCP(CP_UTF8);

    float num1, num2;
    int opcao;

    // Entrada dos números
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Menu
    printf("\nEscolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // Escolha da operação
    switch(opcao) {
        case 1:
            soma(num1, num2);
            break;

        case 2:
            subtracao(num1, num2);
            break;

        case 3:
            multiplicacao(num1, num2);
            break;

        case 4:
            divisao(num1, num2);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    getch();
}