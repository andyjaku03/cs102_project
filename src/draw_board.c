#include "draw_board.h"

/* Drawing the actual board */
void draw_board()
{
   printf("\n");
    printf("                 User's Board                                    Computer's Board\n");
    printf("    A   B   C   D   E   F   G   H   I   J  ");
    printf(SPACE);
    printf("    A   B   C   D   E   F   G   H   I   J\n");
    printf("  ________________________________________ ");
    printf(SPACE);
    printf("  ________________________________________\n");
    for(int column=0; column<SIZE;column++){
        printf("%d ", column);
        printf("|");
        for(int row=0; row<SIZE;row++){
            printf(" %c |", user_board[column][row]);
          
        }
        printf(SPACE);
        printf("%d ", column);
        printf("|");
        for(int row=0; row<SIZE;row++){
            printf(" %c |", cpu_board[column][row]);
            
          
        }
    printf("\n  ________________________________________ ");
    printf(SPACE);
    printf("  ________________________________________ \n");
    }
}
