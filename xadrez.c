#include <stdio.h> // Para a função printf

int main() {
    // Comentário: Definindo o número de casas para cada movimento.
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;
    int i; // Variável de controle para os loops

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
    printf("Rainha concluiu seu movimento.\n");

    return 0; // Indica que o programa terminou com sucesso
}