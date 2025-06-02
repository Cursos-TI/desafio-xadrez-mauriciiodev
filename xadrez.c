#include <stdio.h> // Para a função printf

int main() {
    // Comentário: Definindo o número de casas para cada movimento das peças anteriores.
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;
    int i; // Variável de controle para os loops das peças anteriores

    // Comentário: Definindo o número de casas para as etapas do movimento do Cavalo.
    const int casas_cavalo_vertical = 2;   // 2 casas para baixo
    const int casas_cavalo_horizontal = 1; // 1 casa para a esquerda

    // --- Movimento da Torre ---
    // Comentário: A Torre move-se cinco casas para a direita.
    // Comentário: Utilizando a estrutura de repetição 'for'.
    printf("--- Movimento da Torre (5 casas para Direita) ---\n");
    for (i = 0; i < casas_torre; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    printf("Torre concluiu seu movimento.\n\n");

    // --- Movimento do Bispo ---
    // Comentário: O Bispo move-se cinco casas na diagonal para cima e à direita.
    // Comentário: Utilizando a estrutura de repetição 'while'.
    printf("--- Movimento do Bispo (5 casas para Cima-Direita) ---\n");
    i = 0; // Reinicia o contador para o loop while
    while (i < casas_bispo) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções
        i++;                     // Incrementa o contador
    }
    printf("Bispo concluiu seu movimento.\n\n");

    // --- Movimento da Rainha ---
    // Comentário: A Rainha move-se oito casas para a esquerda.
    // Comentário: Utilizando a estrutura de repetição 'do-while'.
    printf("--- Movimento da Rainha (8 casas para Esquerda) ---\n");
    i = 0; // Reinicia o contador para o loop do-while
    if (casas_rainha > 0) { // Garante que o loop execute apenas se houver casas a mover
        do {
            printf("Esquerda\n"); // Imprime a direção do movimento
            i++;                // Incrementa o contador
        } while (i < casas_rainha);
    }
    printf("Rainha concluiu seu movimento.\n"); // Linha final da Rainha

    // Comentário: Linha em branco para separar o movimento do Cavalo dos movimentos anteriores.
    printf("\n");

    // --- Movimento do Cavalo ---
    // Comentário: O Cavalo se move em "L": 2 casas em uma direção e 1 perpendicular.
    // Comentário: Neste caso, 2 casas para Baixo e 1 casa para Esquerda.
    // Comentário: Utilizaremos um loop 'do-while' externo para encapsular o movimento em "L" (executará uma vez).
    // Comentário: Dentro dele, um loop 'for' para os movimentos verticais e um loop 'while' para o horizontal.
    printf("--- Movimento do Cavalo (2 Baixo, 1 Esquerda) ---\n");

    int contador_movimento_L = 0; // Contador para o loop externo do Cavalo (para executar uma vez)
    do {
        // Comentário: Primeira parte do movimento em "L": N casas na vertical (Baixo).
        // Comentário: Usando loop 'for' (obrigatório).
        int passo_vertical; // Variável de controle para o loop vertical
        for (passo_vertical = 0; passo_vertical < casas_cavalo_vertical; passo_vertical++) {
            printf("Baixo\n"); // Imprime a direção do movimento vertical
        }

        // Comentário: Segunda parte do movimento em "L": M casas na horizontal (Esquerda).
        // Comentário: Usando loop 'while' (alternativa ao do-while, conforme solicitado).
        int passo_horizontal = 0; // Variável de controle para o loop horizontal
        while (passo_horizontal < casas_cavalo_horizontal) {
            printf("Esquerda\n"); // Imprime a direção do movimento horizontal
            passo_horizontal++;   // Incrementa o contador do passo horizontal
        }

        contador_movimento_L++; // Incrementa para garantir que o 'do-while' execute apenas uma vez
    } while (contador_movimento_L < 1); // O loop externo executa apenas uma vez para um único movimento em "L"

    printf("Cavalo concluiu seu movimento.\n");

    return 0; // Indica que o programa terminou com sucesso
}