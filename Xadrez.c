#include <stdio.h>  

int main() {
    // 1. MOVIMENTO DA TORRE (5 casas para a DIREITA)    
    printf("Movimento da Torre (5 casas para a direita):\n");
    
    for (int contador = 1; contador <= 5; contador++) {
        printf("Direita\n");
    }

    // 2. MOVIMENTO DO BISPO (5 casas na DIAGONAL CIMA-DIREITA)
    printf("\nMovimento do Bispo (5 casas na diagonal Cima-Direita):\n");
    
    int contador_bispo = 1;
    while (contador_bispo <= 5) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // 3. MOVIMENTO DA RAINHA (8 casas para a ESQUERDA)
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= 8);

    // 4. MOVIMENTO DO CAVALO (2 casas para BAIXO e 1 para ESQUERDA)
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para esquerda):\n");
    
    int movimentos_L = 1;  
    while (movimentos_L--) {
        // Primeira parte do "L": 2 casas para BAIXO (usando for)
        for (int passo = 0; passo < 2; passo++) {
            printf("Baixo\n");
        }
        // Segunda parte do "L": 1 casa para ESQUERDA
        printf("Esquerda\n");
    }

    return 0;
}