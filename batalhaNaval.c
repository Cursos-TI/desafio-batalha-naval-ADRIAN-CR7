#include <stdio.h>

int main() {
    int i, j;
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com água (0)
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            tabuleiro[i][j] = 0;
        }
    }

    // CRUZ
    // Vamos colocar a cruz no centro (linhas 4 a 6, colunas 4 a 6)
    for(i=3;i<=7;i++){
        tabuleiro[i][5] = 3; // coluna do meio
        tabuleiro[5][i] = 3; // linha do meio
    }

    //  CONE 
    // Vamos colocar o cone no canto inferior direito (linhas 7 a 9, colunas 7 a 9)
    tabuleiro[7][8] = 3;            // topo do cone
    tabuleiro[8][7] = tabuleiro[8][8] = tabuleiro[8][9] = 3; // base do cone
    
    //  OCTAEDRO 
    //  octaedro no canto superior esquerdo (linhas 1 a 3, colunas 1 a 3)
    tabuleiro[1][2] = 3;            // topo
    tabuleiro[2][1] = tabuleiro[2][2] = tabuleiro[2][3] = 3; // linha do meio
    tabuleiro[3][2] = 3;            // base

    //  Imprime o tabuleiro 
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
