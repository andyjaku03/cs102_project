#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include "clear_board.h"
#include "draw_board.h"
#include "place_ships.h"
#include "cpu_hit_spot.h"
#include "cpu_place_ships.h"
#include "play_game.h"
#include "hit_spot.h"

#define SIZE 10 //The dimensions of the board

bool hitShip;
bool hasBeenRun;
char user_board[SIZE][SIZE]; //The variable for displaying the user's board
char cpu_board[SIZE][SIZE]; //The variable for displaying the cpu's board
char cpu_logic_board[SIZE][SIZE]; //The variable for displaying the cpu's board

#endif /* MAIN_H */