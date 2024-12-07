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

// Comece aqui seu programa.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;

    // Solicita a altura da pirâmide entre 1 e 8, garantindo que o valor esteja dentro do intervalo
    // permitido
    do
    {
        altura = get_int("Altura: "); // Pede ao usuário para inserir a altura da pirâmide
    }
    while (altura < 1 || altura > 8); // Repete enquanto a altura não estiver entre 1 e 8

    // Loop externo: controla o número de linhas da pirâmide
    for (int i = 1; i <= altura; i++)
    {
        // Loop interno 1: imprime espaços à esquerda para alinhar a pirâmide à direita
        for (int j = 0; j < altura - i; j++)
        {
            printf(" ");
        }

        // Loop interno 2: imprime os blocos '#' da primeira metade da pirâmide
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }

        // Imprime os dois espaços no meio
        printf("  ");

        // Loop interno 3: imprime os blocos '#' da segunda metade da pirâmide
        for (int l = 1; l <= i; l++)
        {
            printf("#");
        }

        // Move para a próxima linha após concluir uma linha da pirâmide
        printf("\n");
    }

    return 0; // Indica que o programa foi executado com sucesso
}
