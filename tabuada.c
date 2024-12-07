/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Diego Miranda Fagundes
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
    // Recebendo número da tabuada pelo usuário
    int num_tabuada = get_int("Você quer a tabuada de qual número? ");

    // Printando tabuada do número escolhido
    // printf("Tabuada do %d:\n", num_tabuada);

    // Usando função for para formar cada item da tabuada
    for (int i = 0; i <= 10; i++)
    {
        int resul = num_tabuada * i;
        printf("%d x %d = %d\n", num_tabuada, i, resul);
    }

    return 0;
}
