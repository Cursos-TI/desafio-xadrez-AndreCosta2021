#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Aluno: André Luís Scuccuglia da Costa
// Matrícula: 202503001421
// Curso: ADS
// Turma: 2025.1

int main() {
    // Nível Novato - Movimentação das Peças
    // Declaração das variáveis

    // Variáveis para coletar as informações das movimentações das peças tanto na vertical (_vert) 
    // quanto na horizontal (_hor)
    int bispo_vert, bispo_hor, rainha_vert, rainha_hor, torre_vert, torre_hor, mov_bispo, mov_rainha, mov_torre, cavalo_vert, cavalo_hor;

    // Inicialização das variáveis
    bispo_vert = 5;
    bispo_hor = 5;
    rainha_vert = 0;
    rainha_hor = -8;
    torre_hor = 5;
    torre_vert = 0;
    mov_bispo = 0;
    mov_rainha = 0;
    mov_torre = 0;
    cavalo_vert = -2;
    cavalo_hor = 1;

    // Implementação de Movimentação do Bispo
    // Escolhido para a movimentação do Bispo a estrutura de repetição while

    printf("O movimento do bispo foi: \n");
    
    if (bispo_vert == 0 && bispo_hor != 0)
        {
            while (mov_bispo <= 5)
            {
                printf("direta %d\n", mov_bispo);
                mov_bispo ++;
            }
        } else if (bispo_vert != 0 && bispo_hor == 0)
        {
            while (mov_bispo <= 5)
            {
                printf("Acima %d\n", mov_bispo);
                mov_bispo ++;
            }
        } else
        {
            while (mov_bispo <= 5)
            {
                printf("direita %d, Acima %d\n", mov_bispo, mov_bispo);
                mov_bispo ++;
            }
        };

    // Implementação de Movimentação da Torre
    // Escolhido para a movimentação do Torre a estrutura de repetição do while

    // Analisando as opções de movimento
    // 1ª análise ==> Movimento apenas na hozizontal
    
    printf("\nO movimento do torre foi: \n");
    if (torre_vert == 0 && torre_hor != 0)
        {
            do {
                printf("direta %d\n", mov_torre);
                mov_torre ++;
            } while (mov_torre <= 5);
        
        } else if (torre_vert != 0 && torre_hor == 0) // 2ª análise ==> Movimento apenas na vertical
        {
            do {
                printf("Acima %d\n", mov_torre);
                mov_torre ++;
                } while (mov_torre <= 5);

        } else //3ª análise ==> movimentos em ambas as direções
        {
            printf("Movimento inválido para esta peça!\n");

        };
    // Implementação de Movimentação da Rainha
    // Escolhido para a movimentação da Rainha a estrutura de repetição FOR

    // Analisando as opções de movimento
    // 1ª análise ==> Movimento apenas na hozizontal
    
    printf("\nO movimento do rainha foi: \n");
    if (rainha_vert == 0 && rainha_hor != 0)
        {
            for (mov_rainha = 0; mov_rainha <= 8; mov_rainha++) 
            {
                printf("esquerda %d\n", mov_rainha);
            }
        
        } else if (rainha_vert != 0 && rainha_hor == 0) // 2ª análise ==> Movimento apenas na vertical
        {
            for (mov_rainha = 0; mov_rainha <=8; mov_rainha++)
             {
                printf("Acima %d\n", mov_rainha);
            } 

        } else //3ª análise ==> movimentos em ambas as direções
        {
            for (mov_rainha = 0; mov_rainha <=8; mov_rainha++)
            {
                printf("esquerda %d, Acima %d\n", mov_rainha, mov_rainha);
            }
        };

    // Nível Aventureiro - Movimentação do Cavalo
    // Treino de loops aninhados, sendo obrigatoriamente um deles FOR

    printf("\nO movimento do cavalo foi: \n");
    
    do {

        for (cavalo_vert = 1; cavalo_vert <= 2; cavalo_vert++)
        {
            printf("Baixo\n");
        }
        printf("Direita\n");
        cavalo_hor--;

    } while (cavalo_hor > 0);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
