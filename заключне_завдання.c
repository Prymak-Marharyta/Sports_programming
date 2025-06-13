#include <stdio.h>

char board[3][3]; // ігрове поле
char player = 'X'; // гравець,який ходить

// iніціалізація порожнього поля
void playingfield() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

// виведення поля на екран
void printboard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

// перевірка, чи є переможець
int gameresult() {
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

// перевірка на нічию
int checkdraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}

// зміна гравця
void playersubstitution() {
    player = (player == 'X') ? 'O' : 'X';
}

// гра
void game() {
    int row, col;
    playingfield();
    
    while (1) {
        printboard();
        printf("Player %c, enter row and column: ", player);
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

        if (gameresult()) {
            printboard();
            printf("Player %c won.\n", player);
            break;
        }

        if (checkdraw()) {
            printboard();
            printf("A draw!\n");
            break;
        }

        playersubstitution();
    }
}

int main() {
    printf("Tic Tac Toe Game (3x3)\n");
    game();
    return 0;
}