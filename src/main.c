#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "naval.h"

int main() {

    char board[TAM][TAM]; // Game board declaration
    int totalHits = 0;
    int language = 0; // 0 for Portuguese, 1 for English

    printf("\n0 - Portuguese (PT-BR) | 1 - English (EN-US): ");
    scanf("%d", &language); // User input for language selection

    srand(time(NULL));
    
    initializeBoard(board);
    placeShips(board);
    
    while (totalHits < 5) {
        system("cls");
        printBoard(board, language);
        int result = hit(board, language);
        if (result == 1){
            totalHits++;
        }  
    }

    system("cls");
    printBoard(board, language);
    if (language == 0) printf("\nParabéns! Você afundou todos os navios!\n");
    else printf("\nCongratulations! You sank all the ships!\n");
    
    return 0;
}