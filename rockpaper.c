#include <stdio.h>

int main() {
    int player1, player2;
    printf("Enter choice for Player 1 (1=Rock, 2=Paper, 3=Scissors): ");
    scanf("%d", &player1);
    printf("Enter choice for Player 2 (1=Rock, 2=Paper, 3=Scissors): ");
    scanf("%d", &player2);

    if (player1 == player2) printf("It's a draw!\n");
    else if ((player1 == 1 && player2 == 3) || (player1 == 2 && player2 == 1) || (player1 == 3 && player2 == 2))
        printf("Player 1 wins!\n");
    else
        printf("Player 2 wins!\n");

    return 0;
}
