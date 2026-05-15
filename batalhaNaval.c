#include <stdio.h>

int main() {

    // =========================================
    // TABULEIRO 10x10
    // =========================================

    int tabuleiro[10][10];

    int linha, coluna;

    // =========================================
    // INICIALIZAR TABULEIRO COM ÁGUA (0)
    // =========================================

    for (linha = 0; linha < 10; linha++) {

        for (coluna = 0; coluna < 10; coluna++) {

            tabuleiro[linha][coluna] = 0;
        }
    }

    // =========================================
    // NAVIOS
    // Cada navio possui tamanho 3
    // =========================================

    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // =========================================
    // COORDENADAS INICIAIS
    // =========================================

    int linhaHorizontal = 2;
    int colunaHorizontal = 1;

    int linhaVertical = 5;
    int colunaVertical = 7;

    // =========================================
    // VALIDAR NAVIO HORIZONTAL
    // =========================================

    if (colunaHorizontal + 3 <= 10) {

        for (coluna = 0; coluna < 3; coluna++) {

            // Verifica sobreposição
            if (tabuleiro[linhaHorizontal][colunaHorizontal + coluna] == 0) {

                tabuleiro[linhaHorizontal][colunaHorizontal + coluna] =
                    navioHorizontal[coluna];
            }
        }
    }

    // =========================================
    // VALIDAR NAVIO VERTICAL
    // =========================================

    if (linhaVertical + 3 <= 10) {

        for (linha = 0; linha < 3; linha++) {

            // Verifica sobreposição
            if (tabuleiro[linhaVertical + linha][colunaVertical] == 0) {

                tabuleiro[linhaVertical + linha][colunaVertical] =
                    navioVertical[linha];
            }
        }
    }

    // =========================================
    // EXIBIR TABULEIRO
    // =========================================

    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");

    for (linha = 0; linha < 10; linha++) {

        for (coluna = 0; coluna < 10; coluna++) {

            printf("%d ", tabuleiro[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}