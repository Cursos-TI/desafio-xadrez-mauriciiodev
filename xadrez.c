#include <stdio.h>

// --- Constantes Globais para os Movimentos ---

// Torre: Movimento e direção
const int PASSOS_TORRE = 5;
const char* DIRECAO_TORRE = "Direita";

// Bispo: Movimento diagonal e direções componentes
const int PASSOS_DIAGONAIS_BISPO = 5;
const char* DIRECAO_BISPO_VERTICAL = "Cima";    // Componente vertical do movimento diagonal
const char* DIRECAO_BISPO_HORIZONTAL = "Direita"; // Componente horizontal do movimento diagonal

// Rainha: Movimento e direção
const int PASSOS_RAINHA = 8;
const char* DIRECAO_RAINHA = "Esquerda";

// Cavalo: Novo movimento (2 casas para Cima, 1 casa para Direita)
const int CASAS_CAVALO_VERTICAL_CIMA = 2;
const char* DIRECAO_CAVALO_VERTICAL_CIMA = "Cima";
const int CASAS_CAVALO_HORIZONTAL_DIREITA = 1;
const char* DIRECAO_CAVALO_HORIZONTAL_DIREITA = "Direita";


// --- Protótipos das Funções ---
void mover_torre_recursivo(int passos_restantes);
void mover_bispo_recursivo(int passos_diagonais_restantes);
void mover_rainha_recursivo(int passos_restantes);
void simular_movimento_cavalo_complexo();


int main() {
    // Comentário: Simulação do movimento da Torre utilizando recursividade.
    printf("--- Movimento da Torre (%d casas para %s) ---\n", PASSOS_TORRE, DIRECAO_TORRE);
    mover_torre_recursivo(PASSOS_TORRE);
    printf("Torre concluiu seu movimento.\n");
    printf("\n\n"); // Linhas em branco para separar a saída de cada peça

    // Comentário: Simulação do movimento do Bispo utilizando recursividade e loops aninhados para cada passo.
    printf("--- Movimento do Bispo (%d casas %s-%s) ---\n", PASSOS_DIAGONAIS_BISPO, DIRECAO_BISPO_VERTICAL, DIRECAO_BISPO_HORIZONTAL);
    mover_bispo_recursivo(PASSOS_DIAGONAIS_BISPO);
    printf("Bispo concluiu seu movimento.\n");
    printf("\n\n"); // Linhas em branco para separar

    // Comentário: Simulação do movimento da Rainha utilizando recursividade.
    printf("--- Movimento da Rainha (%d casas para %s) ---\n", PASSOS_RAINHA, DIRECAO_RAINHA);
    mover_rainha_recursivo(PASSOS_RAINHA);
    printf("Rainha concluiu seu movimento.\n");
    printf("\n\n"); // Linhas em branco para separar

    // Comentário: Simulação do movimento do Cavalo utilizando loops complexos/aninhados.
    simular_movimento_cavalo_complexo();
    // A mensagem de conclusão do cavalo será impressa dentro da função.

    return 0; // Indica que o programa terminou com sucesso
}

// --- Implementações das Funções Recursivas ---

/**
 * @brief Simula o movimento da Torre de forma recursiva.
 * A Torre se move em linha reta na direção especificada.
 * @param passos_restantes O número de casas que a Torre ainda precisa mover.
 */
void mover_torre_recursivo(int passos_restantes) {
    // Comentário: Caso base da recursão: se não há mais passos, a função retorna.
    if (passos_restantes <= 0) {
        return;
    }

    // Comentário: Ação da Torre: imprimir sua direção de movimento.
    printf("%s\n", DIRECAO_TORRE);

    // Comentário: Passo recursivo: chamar a si mesma com um passo a menos.
    mover_torre_recursivo(passos_restantes - 1);
}

/**
 * @brief Simula o movimento do Bispo de forma recursiva.
 * Para cada passo diagonal, utiliza loops aninhados (conceitualmente) para
 * representar os componentes vertical e horizontal do movimento.
 * @param passos_diagonais_restantes O número de movimentos diagonais que o Bispo ainda precisa fazer.
 */
void mover_bispo_recursivo(int passos_diagonais_restantes) {
    // Comentário: Caso base da recursão: não há mais movimentos diagonais.
    if (passos_diagonais_restantes <= 0) {
        return;
    }

    // Comentário: Simulação de UM passo diagonal.
    // Os loops aninhados aqui representam a composição de um movimento diagonal.
    // Loop externo: componente vertical do passo diagonal (executa uma vez).
    for (int componente_vertical = 0; componente_vertical < 1; componente_vertical++) {
        // Loop interno: componente horizontal do passo diagonal (executa uma vez).
        for (int componente_horizontal = 0; componente_horizontal < 1; componente_horizontal++) {
            // Comentário: Ação do Bispo: imprimir o movimento diagonal combinado.
            printf("%s, %s\n", DIRECAO_BISPO_VERTICAL, DIRECAO_BISPO_HORIZONTAL);
        }
    }

    // Comentário: Passo recursivo: continuar para o próximo movimento diagonal.
    mover_bispo_recursivo(passos_diagonais_restantes - 1);
}

/**
 * @brief Simula o movimento da Rainha de forma recursiva.
 * A Rainha se move em linha reta na direção especificada (simplificado para este desafio).
 * @param passos_restantes O número de casas que a Rainha ainda precisa mover.
 */
void mover_rainha_recursivo(int passos_restantes) {
    // Comentário: Caso base da recursão.
    if (passos_restantes <= 0) {
        return;
    }

    // Comentário: Ação da Rainha.
    printf("%s\n", DIRECAO_RAINHA);

    // Comentário: Passo recursivo.
    mover_rainha_recursivo(passos_restantes - 1);
}

// --- Implementação dos Loops Complexos para o Cavalo ---

/**
 * @brief Simula o movimento em "L" do Cavalo (2 casas para Cima, 1 para Direita)
 * utilizando loops aninhados e múltiplas variáveis de controle.
 */
void simular_movimento_cavalo_complexo() {
    printf("--- Movimento do Cavalo (%d %s, %d %s) ---\n",
           CASAS_CAVALO_VERTICAL_CIMA, DIRECAO_CAVALO_VERTICAL_CIMA,
           CASAS_CAVALO_HORIZONTAL_DIREITA, DIRECAO_CAVALO_HORIZONTAL_DIREITA);

    // Comentário: Loop externo para encapsular o único movimento em "L" solicitado.
    // Este loop executa apenas uma vez.
    for (int instancia_movimento_L = 0; instancia_movimento_L < 1; instancia_movimento_L++) {
        int passos_verticais_dados = 0;     // Controla os passos verticais realizados
        int passos_horizontais_dados = 0;   // Controla os passos horizontais realizados
        int condicao_extra_ativada = 1;     // Exemplo de "múltipla condição" (sempre verdadeira aqui)

        // Comentário: Loop aninhado 'for' para a parte vertical do movimento do Cavalo (Cima).
        // Este loop demonstra o controle com múltiplas variáveis e uma condição.
        for (int passo_v = 0; passo_v < CASAS_CAVALO_VERTICAL_CIMA; passo_v++) {
            // Verifica se ainda precisa mover verticalmente e se a condição extra é válida
            if (passos_verticais_dados < CASAS_CAVALO_VERTICAL_CIMA && condicao_extra_ativada) {
                printf("%s\n", DIRECAO_CAVALO_VERTICAL_CIMA);
                passos_verticais_dados++;
            }

            // Exemplo de uso de 'continue':
            // Se quiséssemos pular alguma lógica subsequente na primeira iteração vertical.
            if (passo_v == 0) {
                // continue; // Neste cenário simples, 'continue' não teria efeito prático visível.
            }
        }

        // Comentário: Loop aninhado 'while' para a parte horizontal do movimento do Cavalo (Direita).
        // Este loop é sequencial ao loop vertical, mas ambos estão dentro do loop da "instancia_movimento_L".
        while (passos_horizontais_dados < CASAS_CAVALO_HORIZONTAL_DIREITA && condicao_extra_ativada) {
            printf("%s\n", DIRECAO_CAVALO_HORIZONTAL_DIREITA);
            passos_horizontais_dados++;

            // Exemplo de uso de 'break':
            // Se uma condição específica exigisse a interrupção imediata do movimento horizontal.
            if (passos_horizontais_dados >= CASAS_CAVALO_HORIZONTAL_DIREITA) {
                // break; // A condição do 'while' já cuida disso neste caso.
            }
        }
    } // Fim do loop da instancia_movimento_L

    printf("Cavalo concluiu seu movimento.\n");
}