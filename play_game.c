#include "play_game.h"

void play_game()
{
  srand(time(NULL));
  hitShip = false;
  hasBeenRun = false;

  bool cpuWon = false;
  bool userWon = false;

  //set up boards for printing 
  clear_computer_board(); 
  clear_user_board();
  clear_logic_board();

  //place user's ships 5,4,3,2,2
  printf("The game begins now: Here are the rules:\n\tYou will be asked to place 5 ships\n\tThe first ship will have a length of 5\n\tThe second a length of 4\n\tThe third a length of 3\n\tThe fourth and fifth will both be of length 2\nOnce you've placed your ships a computer will randomly place their ships.\nIt's your job to hit all their ships before they hit yours.\nIf you guess a correct position a 'X' will pop up under the CPU's board, meaning a piece of a ship is located there.\nIf you missed, a 'O' will appear signifying that the position is empty. Try to find all the CPU's ships, goodluck!\n");
  char understood [50];
    printf("Do you understand\n");
  scanf("%s", understood); 
  if(understood[0] == 'Y' || understood[0] == 'y')
  {
  draw_board();
  place_ships(5);
  place_ships(4);
  place_ships(3);
  place_ships(2);
  place_ships(2);
  draw_board();

  //randomly place the cpu's ships
  cpu_place_ships();
  draw_board();

  //begin game loop
  while(!userWon && !cpuWon)
  {
    userWon = hit_spot();
    draw_board();
    cpuWon = cpu_hit_spot();
    draw_board();
  }

  if(userWon)
  {
    printf("Congratulations, you win!\n");
  }
  else
  {
    printf("Sorry, you lost. Try again next time!");
  }
  }
  else
  {
    printf("Sorry for the confusion, please read that again.");
    system("clear");
    play_game();
  }
}
