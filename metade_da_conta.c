/**
 * IDENTIFICAÇÃO DO ESTUDANTE:
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
/**
 * Inclusão de bibliotecas:
 */
#include <cs50.h>
#include <stdio.h>

/**
 * Função main
 */
int main(void)
{
    // Solicita o valor da comida:
    float comida;
    do
    {
        comida = get_float("Valor da comida: ");
    }
    while (comida < 10.00 || comida > 999.99);

    // Solicita o percentual de impostos:
    float imposto;
    do
    {
        imposto = get_float("Porcentagem de impostos: ");
    }
    while (imposto < 0.00 || imposto > 100.00);

    // Solicita o percentual de gorjeta:
    int gorjeta;
    do
    {
        gorjeta = get_int("Porcentagem da gorjeta: ");
    }
    while (gorjeta < 0 || gorjeta > 100);

    // TODO: coloque aqui seu código para o cálculo do valor da conta.
    // Não se esqueça de imprimir o valor final conforme especificado na
    // descrição do exercício.

    float gorjetaconv;
    gorjetaconv = (float) gorjeta;

    float cadaum = ((comida * (1 + (imposto / 100))) * (1 + (gorjetaconv / 100))) / 2;

    printf("Cada um pagará R$ %.2f!\n", cadaum);

    // Termina o programa:
    return 0;
}
