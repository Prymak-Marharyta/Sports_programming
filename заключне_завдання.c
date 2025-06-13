#include <stdio.h>

char board[3][3]; // ігрове поле
char player = 'X'; // гравець, що ходить

// Ініціалізація порожнього поля
void playingfield() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

// Виведення поля на екран
void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

// Перевірка, чи є переможець
int checkWin() {
    for (int i = 0; i < 3; i++) {
        // перевірка рядків і стовпців
        if ((board[i][0] == player &&
             board[i][1] == player &&
             board[i][2] == player) ||
            (board[0][i] == player &&
             board[1][i] == player &&
             board[2][i] == player))
            return 1;
    }
    // перевірка діагоналей
    if ((board[0][0] == player &&
         board[1][1] == player &&
         board[2][2] == player) ||
        (board[0][2] == player &&
         board[1][1] == player &&
         board[2][0] == player))
        return 1;

    return 0;
}

// Перевірка на нічию
int checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}

// Зміна гравця
void switchPlayer() {
    player = (player == 'X') ? 'O' : 'X';
}

// Основна гра
void playGame() {
    int row, col;
    playingfield();
    
    while (1) {
        printBoard();
        printf("Player %c, enter row and column (1-3 separated by a space): ", player);
        scanf("%d %d", &row, &col);

        // Перевірка введення
        if (row < 1 || row > 3 || col < 1 || col > 3) {
            printf("Incorrect coordinates.\n");
            continue;
        }

        row--; col--; // зсув до індексу 0

        if (board[row][col] != ' ') {
            printf("This cell is already taken. Please try again.\n");
            continue;
        }

        board[row][col] = player;

        if (checkWin()) {
            printBoard();
            printf("Player %c won.\n", player);
            break;
        }

        if (checkDraw()) {
            printBoard();
            printf("A draw!\n");
            break;
        }

        switchPlayer();
    }
}

// Точка входу
int main() {
    printf("Tic Tac Toe Game (3x3)\n");
    playGame();
    return 0;
}