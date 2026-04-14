#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "naval.h"

int main() {

    char board[TAM][TAM]; // Game board declaration
    int row, col, shoot;
    int language = 0; // 0 for Portuguese, 1 for English

    printf("\nSelect language / Selecione o idioma: \n");
    printf("0 - Portuguese (PT-BR)\n");
    printf("1 - English (EN-US)\n");
    scanf("%d", &language); // User input for language selection

    srand(time(NULL));
    
    initializeBoard(board);
    placeShips(board);
    printBoard(board, language);
    hit(board, shoot, language);
    fireShot(board, row, col);

    printf("\n");
    
    return 0;
}