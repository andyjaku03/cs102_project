#include "clear_board.h"

void clear_computer_board(){
    for(int coloumn=0;coloumn<SIZE;coloumn++){
        for(int row=0;row<SIZE;row++)
            cpu_board[coloumn][row] = ' ';
            
    }
}

/* Setting all the fill values of the user's board to empty */
void clear_user_board(){
    for(int coloumn=0;coloumn<SIZE;coloumn++){
        for(int row=0;row<SIZE;row++)
            user_board[coloumn][row] = ' ';
    }
}

/* Setting all the fill values of the user's board to empty */
void clear_logic_board(){
    for(int coloumn=0;coloumn<SIZE;coloumn++){
        for(int row=0;row<SIZE;row++)
            cpu_logic_board[coloumn][row] = ' ';
    }
}