#ifndef naval_h
#define naval_h

#define TAM 10

/*
    * Function: initializeBoard
    * ----------------------------
    * Fills the game board with the default water character ('~').
    * board: 2D array representing the game area.
*/

void initializeBoard(char board[TAM][TAM]);

/*
    * Function: printBoard
    * ----------------------------
    * Displays the current state of the board to the player.
    * board: 2D array to be printed.
    * language: 0 for Portuguese (PT-BR), 1 for English (EN-US).
*/

void printBoard(char board[TAM][TAM], int language);

#endif