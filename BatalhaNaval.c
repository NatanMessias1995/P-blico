#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    int tabuleiro[10][10] = {0};    //// matriz 10 x 10 definida

    int tamanhoNavio = 3; // tamanho fixo para todos os navios

    ///// NAVIO HORIZONTAL //////
    int linhaNavioHorizontal = 0;    // linha inicial do navio horizontal
    int colunaNavioHorizontal = 0;   // coluna inicial do navio horizontal
    if (colunaNavioHorizontal + tamanhoNavio <= 10) {  ///// verifica se o navio cabe horizontalmente
        for (int naviohorizontal = 0; naviohorizontal < tamanhoNavio; naviohorizontal++) {   ///// declarei o navio direto no for (CONDIÇÃO < 3)
            tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + naviohorizontal] = 3;   ///// define a declaração anterior dentro do tabuleiro
        }
    }

    ///// NAVIO VERTICAL //////  
    int linhaNavioVertical = 8;     // linha inicial do navio vertical
    int colunaNavioVertical = 9;    // coluna inicial do navio vertical
    if (linhaNavioVertical - (tamanhoNavio - 1) >= 0) {  ///// verifica se o navio cabe verticalmente (descendo para cima)
        for (int naviovertical = 0; naviovertical < tamanhoNavio; naviovertical++) {   ///// declarei o navio direto no for (CONDIÇÃO < 3)
            tabuleiro[linhaNavioVertical - naviovertical][colunaNavioVertical] = 3;     ///// define a declaração anterior dentro do tabuleiro
        }
    }

    ///// NAVIO DIAGONAL //////  
    int linhaNavioDiagonal = 3;     // linha inicial do navio diagonal
    int colunaNavioDiagonal = 5;    // coluna inicial do navio diagonal
    if (linhaNavioDiagonal + tamanhoNavio <= 10 && colunaNavioDiagonal + tamanhoNavio <= 10) {  ///// verifica se o navio cabe diagonalmente
        for (int naviodiagonal = 0; naviodiagonal < tamanhoNavio; naviodiagonal++) {   ///// declarei o navio direto no for (CONDIÇÃO < 3)
            tabuleiro[linhaNavioDiagonal + naviodiagonal][colunaNavioDiagonal + naviodiagonal] = 3;  ///// define a declaração anterior dentro do tabuleiro
        }
    }

    ///// NAVIO DIAGONAL INVERSA //////  
    int linhaNavioDiagonal2 = 8;    // linha inicial do navio diagonal inversa
    int colunaNavioDiagonal2 = 2;   // coluna inicial do navio diagonal inversa
    if (linhaNavioDiagonal2 - (tamanhoNavio - 1) >= 0 && colunaNavioDiagonal2 + tamanhoNavio <= 10) {  ///// verifica se o navio cabe na diagonal inversa
        for (int naviodiagonal2 = 0; naviodiagonal2 < tamanhoNavio; naviodiagonal2++) {   ///// declarei o navio direto no for (CONDIÇÃO < 3)
            tabuleiro[linhaNavioDiagonal2 - naviodiagonal2][colunaNavioDiagonal2 + naviodiagonal2] = 3;  ///// define a declaração anterior dentro do tabuleiro
        }
    }

    ///// IMPRIME TABULEIRO COM NUMEROS 0 E COM OS NAVIO DECLARADOS ANTERIOMENTE

    for (int i = 0; i < 10; i++) {                                            /// CONDIÇÃO ATE 10 PARA PEGAR TODAS AS LINHAS 'I'             
        for (int j = 0; j < 10; j++) {                                        /// CONDIÇÃO ATE 10 PARA PEGAR TODAS AS COLUNAS 'J'  
            printf("%d   ", tabuleiro[i][j]);                                /// PRINTA AS LINHAS E COLUNAS DO TABULEIRO COM OS NAVIOS
        }
        printf("\n");                                                      /// PULA UMA LINHA AO EXECUTAR O FOR NOVAMENTE ATÉ 
    }                                                                         ///  COMPLETAR O CICLO DEFINIDO NA CONDIÇÃO

    return 0;
}
