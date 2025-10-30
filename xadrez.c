#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

// ============================
    // Simulação de movimentos no xadrez
    // Peças: Torre, Bispo, Rainha e Cavalo
    // Autor: Léo Carvalho
    // ============================

    // ----------------------------
    // 1) Movimento da TORRE
    // Estrutura usada: FOR
    // Movimento: 5 casas para a direita
    // ----------------------------
    printf("Movimento da TORRE:\n");
    int casasTorre = 5;
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // ----------------------------
    // 2) Movimento do BISPO
    // Estrutura usada: WHILE
    // Movimento: 5 casas na diagonal para cima e à direita
    // ----------------------------
    printf("Movimento do BISPO:\n");
    int casasBispo = 5;
    int contador = 1;

    while (contador <= casasBispo) {
        printf("Cima, Direita (%d)\n", contador);
        contador++;
    }

    printf("\n");

    // ----------------------------
    // 3) Movimento da RAINHA
    // Estrutura usada: DO-WHILE
    // Movimento: 8 casas para a esquerda
    // ----------------------------
    printf("Movimento da RAINHA:\n");
    int casasRainha = 8;
    int pos = 1;

    do {
        printf("Esquerda (%d)\n", pos);
        pos++;
    } while (pos <= casasRainha);

    printf("\n");

    // ----------------------------
    // 4) Movimento do CAVALO
    // Estrutura usada: FOR + WHILE (loops aninhados)
    // Movimento: 2 casas para baixo e 1 casa para a esquerda (em "L")
    // ----------------------------
    printf("Movimento do CAVALO:\n");

    int movimentosBaixo = 2;   // duas casas para baixo
    int movimentosEsquerda = 1; // uma casa para a esquerda

    // Loop externo (FOR): controla o movimento para baixo
    for (int i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo (%d)\n", i);
    }

    // Loop interno (WHILE): controla o movimento para a esquerda
    int j = 1;
    while (j <= movimentosEsquerda) {
        printf("Esquerda (%d)\n", j);
        j++;
    }

    printf("\nSimulação concluída com sucesso!\n");


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
