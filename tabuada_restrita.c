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
    int num_tabuada = get_int("Você quer a tabuada de qual número? ");
    int num_inicio = get_int("Você quer começar a tabuada em qual número? ");
    int num_final = get_int("Você quer terminar a tabuada em qual número? ");

    if (num_inicio <= num_final)
    {
        //printf("Tabuada do número %d de %d até %d:\n", num_tabuada, num_inicio, num_final);

        for (int i = num_inicio; i <= num_final; i++)
        {
            int resul = num_tabuada * i;
            printf("%d x %d = %d\n", num_tabuada, i, resul);
        }
    }
    else
    {
        printf("Erro na especificação da tabuada.");
    }

    return 0;
}
