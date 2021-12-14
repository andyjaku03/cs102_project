#include "place_ships.h"

char colCoordinate;
int rowCoordinate;
int convCoordinate;

void place_ships(int length)
{
  int shipLength = length;
  char startingCharacter [50];
  printf("How would you like to orient your ship? vertically or horizontally(v/h)?\n");
  scanf("%s", startingCharacter); 
  if(startingCharacter[0] == 'h' || startingCharacter[0] == 'H')
  {
    printf("Enter the row (0-9) coordinate of the leftmost point of your ship:\n");
    scanf("%d", &rowCoordinate);
    printf("Enter the column (A-J) coordinate of the leftmost point of your ship:\n");
    scanf("%s", &colCoordinate);
    //at this point I have an int row coordinate and a char column coordinate
    convCoordinate = colCoordinate - 65;
    //converts char col to its 0-26 value (starting from A)
    if(!check_horizontal_ship(shipLength, rowCoordinate, convCoordinate))
    {
      put_horizontal_ship(shipLength, rowCoordinate, convCoordinate);
    } 
    //A B C D E F G H I J 
    //0 1 2 3 4 5 6 7 8 9   
  }
  else if(startingCharacter[0] == 'v' || startingCharacter[0] == 'V')
  {
    printf("Enter the row (0-9) coordinate of the uppermost point of your ship:\n");
    scanf("%d", &rowCoordinate);
    printf("Enter the column (A-J) coordinate of the uppermost point of your ship:\n");
    scanf("%s", &colCoordinate);
    //at this point I have an int row coordinate and a char column coordinate
    convCoordinate = colCoordinate - 65;
    //converts char col to its 0-26 value (starting from A)
    if(!check_vertical_ship(shipLength, rowCoordinate, convCoordinate))
    {
      put_vertical_ship(shipLength, rowCoordinate, convCoordinate);
    }
  }
}

void put_horizontal_ship(int length, int rowVal, int colVal)
{
  for(int i = 0; i < length; i++)
  {
    user_board[rowVal][colVal + i] = 'B';
  }
}

void put_vertical_ship(int length, int rowVal, int colVal)
{
  for(int i = 0; i < length; i++)
  {
    user_board[rowVal + i][colVal] = 'B';
  }
}

bool check_horizontal_ship(int length, int rowVal, int colVal)
{
  bool rowFailed = true;
  bool colFailed = true;
  bool dupeFailed = true;
  if(rowVal >=0 && rowVal <= 9)
  {
    rowFailed = false;
    if(colVal + length <= 10)
    {
      colFailed = false;
      int tempRow = rowVal;
      int tempCol = colVal;
      for(int i = 0; i < length; i++)
      {
        if(user_board[tempRow][tempCol + i] == 'B')
        {
          printf("There already exists a ship within row: %d and column: %c\n", tempRow, tempCol);
          break;
        }
        dupeFailed = false;
      }
      if(dupeFailed)
      {
        while(dupeFailed)
        {
          
          printf("Please pick a new row or column, the one you entered conflicts with an existing piece.\n");
          printf("Enter the row (0-9) coordinate of the leftmost point of your ship:\n");
          scanf("%d", &rowVal);
          printf("Enter the column (A-J) coordinate of the leftmost point of your ship:\n");
          char unadjustedCol;
          scanf("%s", &unadjustedCol);
          colVal = unadjustedCol -65;
          dupeFailed = check_horizontal_ship(length, rowVal, colVal);
        }
      }
    }
    else
    {
      if(colFailed)
      {
        printf("Please pick a new column, the one you entered does not fit within the board.");
        char unadjustedCol;
        printf("Enter the column (A-J) coordinate of the leftmost point of your ship:\n");
        scanf("%s", &unadjustedCol);
        colVal = unadjustedCol -65;
        colFailed = check_horizontal_ship(length, rowVal, colVal);
      }
    }
  }
  else
  {
    if(rowFailed)
    {
      printf("Please pick a new row, the one you entered does not fit within the board.");
      scanf("%d", &rowVal);
      rowFailed = check_horizontal_ship(length, rowVal, colVal);
    }
  }
  rowCoordinate = rowVal;
  convCoordinate = colVal;
  return false;
}

bool check_vertical_ship(int length, int rowVal, int colVal)
{
  bool rowFailed = true;
  bool colFailed = true;
  bool dupeFailed = true;
  if(rowVal >=0 && rowVal + length <= 10)
  {
    rowFailed = false;
    if(colVal <= 9)
    {
      colFailed = false;
      int tempRow = rowVal;
      int tempCol = colVal;
      for(int i = 0; i < length; i++)
      {
        if(user_board[tempRow + i][tempCol] == 'B')
        {
          printf("There already exists a ship within row: %d and column: %c\n", tempRow, tempCol);
          break;
        }
        dupeFailed = false;
      }
      if(dupeFailed)
      {
        while(dupeFailed)
        {
          printf("Please pick a new row or column, the one you entered conflicts with an existing piece.\n");
          printf("Enter the row (0-9) coordinate of the leftmost point of your ship:\n");
          scanf("%d", &rowVal);
          printf("Enter the column (A-J) coordinate of the leftmost point of your ship:\n");
          char unadjustedCol;
          scanf("%s", &unadjustedCol);
          colVal = unadjustedCol -65;
          dupeFailed = check_horizontal_ship(length, rowVal, colVal);
        }
      }
    }
    else
    {
      if(colFailed)
      {
        printf("Please pick a new column, the one you entered does not fit within the board.");
        char unadjustedCol;
        printf("Enter the column (A-J) coordinate of the leftmost point of your ship:\n");
        scanf("%s", &unadjustedCol);
        colVal = unadjustedCol -65;
        colFailed = check_horizontal_ship(length, rowVal, colVal);
      }
    }
  }
  else
  {
    if(rowFailed)
    {
      printf("Please pick a new row, the one you entered does not fit within the board.\n");
      scanf("%d", &rowVal);
      rowFailed = check_horizontal_ship(length, rowVal, colVal);
    }
  }
  rowCoordinate = rowVal;
  convCoordinate = colVal;
  return false;
}