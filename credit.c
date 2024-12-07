/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo:Diego Miranda Fagundes
 *    Matrícula:202421898
 *    Turma:SI1N
 *    Email:diegomfagundes95@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

// Comece aqui seu pragrama.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number;
    int sum = 0, digit_count = 0;
    int start_digits = 0;

    // Solicita o número do cartão de crédito
    number = get_long("Número: ");
    long temp_number = number;

    // Realiza o algoritmo de Luhn e conta os dígitos
    while (temp_number > 0)
    {
        int digit = temp_number % 10;

        // Alterna entre somar direto e multiplicar o dígito por 2
        if (digit_count % 2 == 0)
        {
            sum += digit;
        }
        else
        {
            int product = digit * 2;
            sum += (product / 10) + (product % 10); // Soma os dígitos do produto
        }

        temp_number /= 10;
        digit_count++;

        // Captura os dois primeiros dígitos
        if (temp_number > 9 && temp_number < 100)
        {
            start_digits = temp_number;
        }
    }

    // Verifica a validade do cartão pelo algoritmo de Luhn
    bool valid = (sum % 10 == 0);

    // Determina o tipo de cartão se for válido
    if (valid)
    {
        if (digit_count == 15 && (start_digits == 34 || start_digits == 37))
        {
            printf("AMEX\n");
        }
        else if (digit_count == 16 && (start_digits >= 51 && start_digits <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((digit_count == 13 || digit_count == 16) && (start_digits / 10 == 4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVÁLIDO\n");
        }
    }
    else
    {
        printf("INVÁLIDO\n");
    }

    return 0;
}
