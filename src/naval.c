#include <stdio.h>
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