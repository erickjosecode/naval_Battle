/*
    * C implementation of the Battleship game
    * EricJose © 2026
*/
#ifndef target
#define target

#include "source.h"

// Target
typedef struct target target;
struct target {
    int row;
    int col;
    target next; // Stack pointer
}

/* Exported functions */

// Create new target
target newTarget(int l, int c);

// Frees up memory
void freeTarget(target j);

#endif