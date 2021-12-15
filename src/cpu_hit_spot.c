#include "cpu_hit_spot.h"
#include <stdlib.h> 

int cpuCounter = 0;
int cpuWinNumber = 16; //total combination of vals 5 + 4 + 3 + 2 + 2
int randomRow;
int randomColumn;
int tempRow;
int tempCol;

bool cpu_hit_spot()
{
  randomRow = rand()%((9 - 0 + 1)) + 0;
  randomColumn = rand()%((9 - 0 + 1)) + 0;
  if(user_board[randomRow][randomColumn] == 'O')
  {
    while(user_board[randomRow][randomColumn] == 'O')
    {
      tempRow = rand()%((9 - 0 + 1)) + 0;
      tempCol = rand()%((9 - 0 + 1)) + 0;
      randomRow = tempRow;
      randomColumn = tempCol;
    }
  }
  else if(user_board[randomRow][randomColumn] == 'X')
  {
    while(user_board[randomRow][randomColumn] == 'X')
    {
      tempRow = rand()%((9 - 0 + 1)) + 0;
      tempCol = rand()%((9 - 0 + 1)) + 0;
      randomRow = tempRow;
      randomColumn = tempCol;
    }
  }
  if(user_board[randomRow][randomColumn] == 'B')
  {
    user_board[randomRow][randomColumn] = 'X';
    cpuCounter++;
    if(cpuCounter == 16)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  else
  {
    user_board[randomRow][randomColumn] = 'O';
    return false;
  }
} 

/*
bool cpu_hit_spot()
{
  randomRow = rand()%((9 - 0 + 1)) + 0;
  randomColumn = rand()%((9 - 0 + 1)) + 0;

  if(!hitShip)
  {
    if(user_board[randomRow][randomColumn] == 'B')
     {
      hitShip = true;
      printf("\tHit!\n");
      user_board[randomRow][randomColumn] = 'X';
    }
    else
    {
      printf("\tMiss!\n");
      user_board[tempRow][tempCol] = 'O';
      hitShip = false;
    }
    tempRow = randomRow;
    tempCol = randomColumn;
    
  }
  else if(hitShip)
  {
    int headsOrTails = rand()%((1 - 0 + 1)) + 0;
    if(headsOrTails == 0)
    {
      int tempHeadsTails = rand()%((1 - 0 + 1)) + 0;
      if(tempHeadsTails == 0)
      {
        tempRow = row_hit(tempRow);
      }
      else
      {
        tempCol = col_hit(tempCol);
      }
    } 
    else
    {
      hasBeenRun = true;
      if(tempRow == 0 && tempCol == 0)
      {
        if(user_board[1][0] == 'B')
        {
          tempRow++;
        }
        else
        {
          tempCol++;
        }
      }
      else if(tempRow == 0 && tempCol == 9)
      {
        if(user_board[1][9] == 'B')
        {
          tempRow++;
        }
        else
        {
          tempCol--;
        }
      }
      else if(tempRow == 9 && tempCol == 0)
      {
        if(user_board[8][0] == 'B')
        {
          tempRow--;
        }
        else
        {
          tempCol++;
        }
      }
      else if(tempRow == 9 && tempCol == 9)
      {
        if(user_board[8][9] == 'B')
        {
          tempRow--;
        }
        else
        {
          tempCol--;
        }
      }
      else
      {
        if(user_board[tempRow +1][tempCol] == 'B')
        {
          tempRow++;
        }
        else if(user_board[tempRow - 1][tempCol] == 'B')
        {
          tempRow--;
        }
        else if(user_board[tempRow][tempCol+1] == 'B')
        {
          tempCol++;
        }
        else if(user_board[tempRow][tempCol-1] == 'B')
        {
          tempCol--;
        }
      }
    }
    //checks to see if you hit piece
    if(user_board[tempRow][tempCol] == 'B')
    {
      cpuCounter++;
      hitShip = true;
      printf("CPU Hit!");
      user_board[tempRow][tempCol] = 'X';
    }
    else
    {
      printf("CPU Missed!");
      user_board[tempRow][tempCol] = 'O';
      hitShip = false;
    }
  }
  if(cpuCounter == cpuWinNumber)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int row_hit(int tempRow)
{
  if(tempRow >= 5)
  {
    tempRow--;
  }
  else
  {
    tempRow++;
  }
  return tempRow;
}

int col_hit(int tempCol)
{
  if(tempCol >= 5)
  {
    tempCol--;
  }
  else
  {
    tempCol++;
  }
  return tempCol;
} */

/* logic 
if it hits at a coordinate, pick random from 0 or 1 to follow through on row or col
if it hits on the random col selection, continue, otherwise return to initial point and go 
through row. */