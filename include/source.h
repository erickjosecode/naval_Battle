/*
        * C implementation of the Battleship game
        * EricJose © 2026
*/
#ifndef global
#define global

/* Libraries used */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.>
#include <string.h>
#include <time.h>
#include <ctype.h>

/* Definitions */

// Operating system definition
#if defined(linux) || defined(linux)
#define LINUX
#endif

#if defined(Apple)
#define OSX
#endif

#if defined(WIN32) || defined(NT)
#define WINDOWS
#endif

/*
Name            Size               
Corvette            2
Submarine           3
Frigate             4
Cruiser             5
Aircraft Carrier    6
*/

// Definition of global variables
char *cleanScreen;
int boardSize;

// Definition of global functions
void cleanStdin();

// Number of boat types
#define boalts 5

// Number of messages
#define hitMessage 4
#define errorMessage 4

// Matrix
#define ship 'B'
#define water '~'
#define dirty '@'

// Mask
#define damage 'X'
#define mistake 'O'
#define nothing '~'

// Function simplification
#define loop(i,j) for(i=0; i<j; i++)

#endif