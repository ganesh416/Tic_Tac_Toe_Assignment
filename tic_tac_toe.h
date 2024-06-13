#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

//MACROS
#define SIZE 3
#define WIN 1
#define NOT_WIN 0
#define DRAW  1
#define NOT_DRAW 0

//functions prototypes
void initializeBoard();
void printBoard();
void playerMove();
void switchPlayer();
int checkWin();
int checkDraw();
void read_players_name();

#endif
