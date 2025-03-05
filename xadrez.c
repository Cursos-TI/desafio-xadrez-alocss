#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    #include <stdio.h>

int main() {
    printf("### Desafio Xadrez! ###\n");
    int torre = 0;
    int bispo = 0;
    int rainha = 0;

    // Movimento da Torre
    printf("Movimentando a Torre (5 casas para a direita):\n");
    // Usando a estrutura de repetição 'for' para a Torre
    for(torre = 0; torre < 5; torre++) { // A variável torre já foi declarada acima, então não precisa declarar novamente aqui.
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo
    printf("Movimentando o Bispo (5 casas para a diagonal Cima, Direita):\n");
    // Usando a estrutura de repetição 'while' para o Bispo
    while(bispo < 5) {
        printf("Cima Direita\n");
        bispo++;
    }
    printf("\n");

    // Movimento da Rainha
    printf("Movimentando a Rainha (8 casas para a esquerda):\n");
    // Usando a estrutura de repetição 'do-while' para a Rainha
    do {
        printf("Esquerda\n");
        rainha++;
    } while(rainha < 8);
    printf("\n");

    return 0;
}

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
