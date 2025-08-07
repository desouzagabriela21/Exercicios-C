#include <stdio.h>

int main() {
    char tabuleiro[3][3], vencedor = ' ', jogador = 'X';
    int jogadas = 1, linha, coluna;
    int i, j, y;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }

    while(jogadas < 9 && vencedor != 'O' && vencedor != 'X') {
      printf("\n### JOGO DA VELHA ###\n");
      for (i=0; i<3; i++){
         for (y = 0; y < 3; y++) {
         printf("      %c",tabuleiro[i][y]);
         if (y < 2){
            printf("|");
         }
         }
        printf(" \n");
      }

        printf("\nRodada %d\n", jogadas);
        printf("Vez do jogador %c!\n", jogador);
        printf("Informe a linha e coluna que deseja jogar:\n");
        scanf("%d %d", &linha, &coluna);

        if(linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3) {
            if(tabuleiro[linha][coluna] == ' ') {
                tabuleiro[linha][coluna] = jogador;
                jogadas++;

                if(tabuleiro[0][0] == jogador && tabuleiro[0][1] == jogador && tabuleiro[0][2] == jogador) {
                    vencedor = jogador;
                }

                if(tabuleiro[1][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[1][2] == jogador) {
                    vencedor = jogador;
                }

                if(tabuleiro[2][0] == jogador && tabuleiro[2][1] == jogador && tabuleiro[2][2] == jogador) {
                    vencedor = jogador;
                }

                if(tabuleiro[0][0] == jogador && tabuleiro[1][0] == jogador && tabuleiro[2][0] == jogador) {
                    vencedor = jogador;
                }

                if(tabuleiro[0][1] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][1] == jogador) {
                    vencedor = jogador;
                }

                if(tabuleiro[0][2] == jogador && tabuleiro[1][2] == jogador && tabuleiro[2][2] == jogador) {
                    vencedor = jogador;
                }

                if(tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) {
                    vencedor = jogador;
                }

                if(tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) {
                    vencedor = jogador;
                }

                if(jogador == 'X') {
                    jogador = 'O';
                } else {
                    jogador = 'X';
                }
            } else {
                printf("\nPosição já preenchida!");
            }
        } else {
            printf("\nPosição inválida!");
        }
    }
  if (vencedor != ' '){
    printf("VITÓRIA!");
    printf("\n### JOGO DA VELHA ###\n");
    for (i=0; i<3; i++){
       for (y = 0; y < 3; y++) {
       printf("      %c",tabuleiro[i][y]);
       if (y < 2){
          printf("|");
       }
       }
      printf(" \n");
    }
  } else {
    printf("Deu velha...");
    printf("\n### JOGO DA VELHA ###\n");
    for (i=0; i<3; i++){
       for (y = 0; y < 3; y++) {
       printf("      %c",tabuleiro[i][y]);
       if (y < 2){
          printf("|");
       }
       }
      printf(" \n");
    }

  }

    return 0;
}
