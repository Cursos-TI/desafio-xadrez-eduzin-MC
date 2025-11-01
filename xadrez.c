#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

     int i; // variável de controle comum

    
    // TORRE - movimento horizontal (para a direita)
    // Estrutura: FOR
    
    int movimentoTorre = 5;

    printf("Movimento da TORRE:\n");

    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n");


    // BISPO - movimento diagonal (para cima e à direita)
    // Estrutura: WHILE

    int movimentoBispo = 5;
    i = 1;

    printf("Movimento do BISPO:\n");

    while (i <= movimentoBispo) {
        printf("Cima, Direita (%d casa)\n", i);
        i++;
    }

    printf("\n");

    // RAINHA - movimento horizontal (para a esquerda)
    // Estrutura: DO-WHILE

    int movimentoRainha = 8;
    i = 1;

    printf("Movimento da RAINHA:\n");

    do {
        printf("Esquerda (%d casa)\n", i);
        i++;
    } while (i <= movimentoRainha);

    printf("\nFim da simulação!\n");


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
