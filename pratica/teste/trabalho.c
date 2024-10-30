#include <stdio.h>

#define SIZE 3

void printBoard(char board[SIZE][SIZE]) { //TABULEIRO
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

int checkWin(char board[SIZE][SIZE]) { //CONDICOES DE VITORIA
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1; // VITORIA NA LINHA
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1; // VITORIA NA COLUNA
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1; // VITORIA NA DIAGONAL
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1; // VITORIA NA ANTI-DIAGONAL
    return 0; // DERROTA
}

int main() {
    char board[SIZE][SIZE] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int row, col, moves = 0;
    char player = 'X';

    printf("Bem-vindo ao Jogo da Velha!\n");
    while (1) {
        printBoard(board);
        printf("Player %c, insira sua jogada (row and column): ", player);
        scanf("%d %d", &row, &col);

        // VALIDAR ENTRADA
        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }

        board[row][col] = player; //JOGADA 
        moves++;

        if (checkWin(board)) { //VENCEDOR
            printBoard(board);
            printf("Player %c wins!\n", player);
            break;
        }

        if (moves == SIZE * SIZE) { //EMPATE
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }

        player = (player == 'X') ? 'O' : 'X'; // TROCA DE JOGADORES
    }

    return 0;
}