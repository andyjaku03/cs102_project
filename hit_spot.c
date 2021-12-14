#include "hit_spot.h"
#include <stdlib.h> 

int counter = 0;
int winNumber = 16; //total combination of vals 5 + 4 + 3 + 2 + 2
char colCoordinate;
int rowCoordinate;
int convCoordinate;

bool hit_spot()
{
  printf("\tEnter the row you would like to hit\n");
  scanf("%d", &rowCoordinate);
  printf("\tEnter the column (A-J) coordinate you would like to hit\n");
  scanf("%s", &colCoordinate);
  convCoordinate = colCoordinate - 65;
  if(cpu_logic_board[rowCoordinate][convCoordinate] == 'B')
  {
    printf("\tYou Hit!\n");
    cpu_board[rowCoordinate][convCoordinate] = 'X';
    cpu_logic_board[rowCoordinate][convCoordinate] = 'X';
    counter++;
    printf("Counter = %d", counter);
  }
  else
  {
    printf("\tYou Missed!\n");
    cpu_board[rowCoordinate][convCoordinate] = 'O';
    cpu_logic_board[rowCoordinate][convCoordinate] = 'O';
  }
  if(counter == winNumber)
  {
    return true;
  }
  else
  {
    return false;
  }
}