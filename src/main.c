#include <stdio.h>
#include "naval.h"

int main() {

    char board[TAM][TAM]; // Game board declaration
    int language = 0; // 0 for Portuguese, 1 for English

    printf("Select language / Selecione o idioma: \n");
    printf("0 - Portuguese (PT-BR)\n");
    printf("1 - English (EN-US)\n");
    scanf("%d", &language); // User input for language selection

    initializeBoard(board);
    printBoard(board, language);
   
    return 0;
}