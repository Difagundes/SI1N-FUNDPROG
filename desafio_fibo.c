#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>  // Biblioteca para usar get_int

// Função para verificar se um número pertence à sequência de Fibonacci
bool isFibonacci(int num) {
    int a = 0, b = 1, soma;

    while (a <= num) {
        if (a == num) {
            return true;
        }
        soma = a + b;
        a = b;
        b = soma;
    }
    return false;
}

int main() {
    // Uso da função get_int da biblioteca cs50.h
    int num = get_int("Digite um número para verificar se pertence à sequência de Fibonacci: ");

    if (isFibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}