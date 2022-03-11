#include "../Inc/print_game.h"
#include <stdlib.h>

void init_apple(void)
{
    apple.x = rand() % 26 +1;
    apple.y = rand() % 76 +1;
}
void init_snake(void)
{
    snake.x = rand() % 24 + 3;
    snake.y = rand() % 74 + 3;
    snake.dir = rand() % 4;
    snake.length = 1;
    snake.time = 0;
    snake.nx = snake.x;
    snake.ny = snake.y;
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