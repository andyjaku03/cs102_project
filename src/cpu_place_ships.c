#include "cpu_place_ships.h"

char colCoordinate;
int rowCoordinate;
int convCoordinate;

void cpu_place_ships()
{
  int randomVal = (rand() % (4 - 0 + 1)) + 0;
  if(randomVal == 0)
  {
    for(int i =0; i < 5; i++)
    {
      cpu_logic_board[0][i] = 'B';
    }
    for(int i =0; i < 4; i++)
    {
      cpu_logic_board[2][i+2] = 'B';
    }
    for(int i =0; i < 3; i++)
    {
      cpu_logic_board[i+2][8] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[6][i] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[7][i+5] = 'B';
    }
  }
  if(randomVal == 1)
  {
    for(int i =0; i < 5; i++)
    {
      cpu_logic_board[i][0] = 'B';
    }
    for(int i =0; i < 4; i++)
    {
      cpu_logic_board[i+2][2] = 'B';
    }
    for(int i =0; i < 3; i++)
    {
      cpu_logic_board[8][i+2] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[i+4][6] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[7][i+5] = 'B';
    }
  }
   if(randomVal == 2)
  {
    for(int i =0; i < 5; i++)
    {
      cpu_logic_board[3][i] = 'B';
    }
    for(int i =0; i < 4; i++)
    {
      cpu_logic_board[i+5][1] = 'B';
    }
    for(int i =0; i < 3; i++)
    {
      cpu_logic_board[2][i+4] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[i+3][8] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[7][i+5] = 'B';
    }
  }
   if(randomVal == 3)
  {
     for(int i =0; i < 5; i++)
    {
      cpu_logic_board[i+1][0] = 'B';
    }
    for(int i =0; i < 4; i++)
    {
      cpu_logic_board[i][2] = 'B';
    }
    for(int i =0; i < 3; i++)
    {
      cpu_logic_board[i+3][4] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[i][6] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[i+7][9] = 'B';
    }
  }
   if(randomVal == 4)
  {
      for(int i =0; i < 5; i++)
    {
      cpu_logic_board[9][i+1] = 'B';
    }
    for(int i =0; i < 4; i++)
    {
      cpu_logic_board[6][i+5] = 'B';
    }
    for(int i =0; i < 3; i++)
    {
      cpu_logic_board[4][i+3] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[7][i] = 'B';
    }
    for(int i =0; i < 2; i++)
    {
      cpu_logic_board[0][i+4] = 'B';
    }
  }
}