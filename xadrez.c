#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

     int i, j; // variável de controle comum

    
    // TORRE - movimento horizontal (para a direita)
    // Estrutura: FOR
    
    int movimentoTorre = 5;

    printf("Movimento da TORRE:\n");

    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n", i);
    }

    printf("\n");


    // BISPO - movimento diagonal (para cima e à direita)
    // Estrutura: WHILE

    int movimentoBispo = 5;
    i = 1;

    printf("Movimento do BISPO:\n");

    while (i <= movimentoBispo) {
        printf("Cima, Direita\n", i);
        i++;
    }

    printf("\n");

    // RAINHA - movimento horizontal (para a esquerda)
    // Estrutura: DO-WHILE

    int movimentoRainha = 8;
    i = 1;

    printf("Movimento da RAINHA:\n");

    do {
        printf("Esquerda\n", i);
        i++;
    } while (i <= movimentoRainha);


    //CAVALO - move 2 casa para cima e 1 para direita ou esquerda
    // Estrutura Aninhada: FOR e WHILE

    printf("\nMovimento do CAVALO:\n");

    int movimentoCima = 2;
    int movimentoDireita = 1;

    for (i = 1; i <= movimentoCima; i++) {
        printf("Cima\n");

        if(i == movimentoCima) {
            j = 1;
        while (j <= movimentoDireita) {

            printf("Direita\n");
            j++;

            }
        }
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
