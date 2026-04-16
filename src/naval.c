#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "naval.h"

/*
    * Implementation of inicializeBoard 
    * Selts all cells to water character. 
*/

void initializeBoard(char board[TAM][TAM]){
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            board[i][j] = '~'; // Default character representing water
        }
    }
}

void printBoard(char board[TAM][TAM], int language) {
    
    // 1. Bilingual titles 
    if (language == 0) {
        printf("\n=== TABULEIRO DE BATALHA ===\n"); 
    } else {
        printf("\n=== BATTLE BOARD ===\n"); 
    }

    // 2. Column coordinates (Same for both languages)
    printf("  "); // Initial space to align with the lines
    for (int i = 0; i < TAM; i++) {
        printf("%d ", i); // Print column numbers
    }
    printf("\n");
    
    // 3. Matrix Design (Same for both languages)
    for (int i = 0; i < TAM; i++){
        printf("%d ", i); // Line number 
        for (int j = 0; j < TAM; j++) {
            if (board[i][j] == 'B') {
                printf("~ "); 
            } else {
                printf("%c ", board[i][j]);
            }
        }
        printf("\n");
    }
}

/*
    * Function: placeShips
    * --------------------
    * Places 5 random ships on the board.
    * Each ship is represented by the character 'B'.
*/
void placeShips(char board[TAM][TAM]){
    int shipsPlaced = 0;

    while (shipsPlaced < 5) {
        // Generate a random row and column index (0 to 9)
        int row = rand() % TAM;
        int col = rand() % TAM; 

        // Mark the random coordinate with a ship unit
        if (board[row][col] == '~'){
            board[row][col] = 'B';
            shipsPlaced++;
        }  
    } 
}

/*
    * Function: fireShot
    * ------------------
    * Processes the player´s shot at a specifit coordinate.
    * 
    * board: the game board matrix.
    * row: the target row index.
    * col: the target column index.
    * 
    * returns: 
    * 1 if a ship was hit ('B' becomes 'X')
    * 0 if it was water ('~' becomes 'O')
    * -1 if the coordinate was already targeted
*/
int fireShoot(char board[TAM][TAM], int row, int col, int language) {
    
    // 1. Check if the coordinate was already targeted ('X' or 'O')
    if (board[row][col] == 'O' || board[row][col] == 'X') {
        if (language == 0) {
            printf("Já atirou nessa posição!\n");
        } else {
            printf("Already shot at this position!\n");
        system("pause");
        return -1;
        }
    // 2. Check if the coordinate contains a ship ('B')
    } else if (board[row][col] == 'B') {
        board[row][col] = 'X'; 
        if (language == 0){
            printf("Acertou!\n");
        } else {
            printf("Got it right!\n");
        system("pause");
        return 1;
        }
    // 3. Otherwise, it´s a miss (water '~')
    } else {
        board[row][col] = 'O';
        if (language == 0) {
            printf("Splashh! Água...\n");
        } else {
            printf("Splashh! Miss...\n");
        system("pause");
        return 0;
        }
    }
}

/*
    *
    *
    * 
*/
int hit(char board[TAM][TAM], int language) {
    int row, col;
    if (language == 0) {
        printf("Digite a linha e coluna (ex: 2 3): ");
        scanf("%d %d", &row, &col);
    } else {
        printf("Enter row and column (ex: 2 3): ");
        scanf("%d %d", &row, &col);
    }
    if (row >= 0 && row < TAM && col >= 0 && col < TAM){
        return fireShoot(board, row, col, language);
    } else {
        if (language == 0) printf("Coordenada inválida!\n");
        else printf("Coordinate out of bounds!\n");
        system("pause");
        return -1;
    }
}