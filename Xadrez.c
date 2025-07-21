#include <stdio.h>

// Função recursiva para a Torre (movimento horizontal)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o Bispo (movimento diagonal)
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para a Rainha (movimento horizontal)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função com loops complexos para o Cavalo (movimento em L)
void moverCavalo() {
    int cima = 2, direita = 1;
    
    for (int i = 1; i <= cima; i++) {
        if (i > 2) break; 
        printf("Cima\n");
        
        for (int j = 1; j <= direita; j++) {
            if (i < 2) continue; // Só imprime direita na última subida
            printf("Direita\n");
        }
    }
}

// Função com loops aninhados para o Bispo (alternativa)
void moverBispoLoops() {
    int casas = 5;
    for (int vertical = 1; vertical <= casas; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Valores definidos no código conforme pedido
    const int torre_casas = 5;
    const int bispo_casas = 5;
    const int rainha_casas = 8;
    
    printf("=== MOVIMENTOS DAS PEÇAS ===\n");
    
    // Torre (recursivo)
    printf("\nTorre (%d casas para direita):\n", torre_casas);
    moverTorre(torre_casas);
    
    // Bispo (recursivo)
    printf("\nBispo (%d casas na diagonal):\n", bispo_casas);
    moverBispo(bispo_casas);
    
    // Bispo com loops aninhados (extra)
    printf("\nBispo (com loops aninhados):\n");
    moverBispoLoops();
    
    // Rainha (recursivo)
    printf("\nRainha (%d casas para esquerda):\n", rainha_casas);
    moverRainha(rainha_casas);
    
    // Cavalo (loops complexos)
    printf("\nCavalo (2 cima + 1 direita):\n");
    moverCavalo();
    
    return 0;
}