#include <stdio.h>  

int main() {
   
    // 1. MOVIMENTO DA TORRE (5 casas para a DIREITA)    
     

    printf("Movimento da Torre (5 casas para a direita):\n");
    
    // FOR: Usar quando sabemos a quantidade a se repetir.
    
  
    for (int i = 1; i <= 5; i++) {   // Inicia em i=1, repete enquanto i<=5, incrementando i a cada execução.
        printf("Direita\n");  // Imprime a direção do movimento.
    }

    
    // 2. MOVIMENTO DO BISPO (5 casas na DIAGONAL)
    // Usaremos a estrutura de repetição WHILE.

    printf("Movimento do Bispo (5 casas na diagonal Cima-Direita):\n");
    
    int casa_bispo = 1;  // Contador para controlar o número de movimentos.

    // WHILE: Repete enquanto a condição (casa_bispo <= 5) for verdadeira.
  
    while (casa_bispo <= 5) {
        printf("Cima, Direita\n");  // Imprime as duas direções do movimento.
        casa_bispo++;  // Incrementa o contador.
    }

    
    // 3. MOVIMENTO DA RAINHA (8 casas para a ESQUERDA)
  
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    
    int casa_rainha = 1;  // Contador para controlar o número de movimentos.

    // DO-WHILE: Executa o bloco pelo menos uma vez antes de verificar a condição.
  
    do {
        printf("Esquerda\n");  // Imprime a direção do movimento.
        casa_rainha++;  // Incrementa o contador.
    } while (casa_rainha <= 8);  // Condição de parada.

    return 0;  // Indica que o programa terminou com sucesso.
}
