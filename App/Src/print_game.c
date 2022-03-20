#include <stdlib.h>
#include "../Inc/print_game.h"
#include "../Inc/game_config.h"


void print_delete(int x,int y)
{
    gotoxy(x, y);
    printf(" ");
}
void print_snake(int x, int y)
{
    gotoxy(x, y);
    printf("@");
}
void print_apple(int x, int y)
{
    gotoxy(x, y);
    printf("$");
}