#ifndef PLACE_SHIPS
#define PLACE_SHIPS

#include "main.h"
#include <stdbool.h>

void place_ships(int length);

void put_horizontal_ship(int length, int rowVal, int colVal);

bool check_horizontal_ship(int length, int rowVal, int colVal);

void put_vertical_ship(int length, int rowVal, int colVal);

bool check_vertical_ship(int length, int rowVal, int colVal);

#endif /*PLACE_SHIPS*/