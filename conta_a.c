#include <cs50.h>
#include <stdio.h>
#include <string.h> // Para manipulação de strings

int main() {
    // Recebe a string do usuário
    string palavra = get_string("Digite uma palavra: ");
    
    int quant = 0;

    // Percorre a string e verifica a ocorrência das letras 'a' ou 'A'
    for (int i = 0, len = strlen(palavra); i < len; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'A') {
            quant++;
        }
    }

    // Exibe o resultado
    if (quant > 0) {
        printf("A letra 'a' (maiúscula ou minúscula) aparece %d vezes.\n", quant);
    } else {
        printf("A letra 'a' (maiúscula ou minúscula) não aparece na palavra informada.\n");
    }

    return 0;
}