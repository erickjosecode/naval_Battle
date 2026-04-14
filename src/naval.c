#include <stdio.h>
#include <stdlib.h>
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
            printf("%c ", board[i][j]); 
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
    
    // We use a single loop to place exactly 5 ships
    for (int i = 0; i < 5; i++){
        // Generate a random row and column index (0 to 9)
        int row = rand() % TAM;
        int col = rand() % TAM; 

        // Mark the random coordinate with a ship unit
        board[row][col] = 'B';
        }
}