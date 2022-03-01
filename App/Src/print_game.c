#include "../Inc/print_game.h"
#include <stdlib.h>


void delay(int us)
{
    for(int i=0;i<us*1000;i++);
}
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
    nx = snake.x;
    ny = snake.y;
}
void print_snake(void)
{
    gotoxy(snake.x, snake.y);
    printf("  ");
    
    int flag = 0;
    
    if(snake.time >= 2100000000){
        if(snake.dir == 0){
            nx = snake.x - 1;
            ny = snake.y;
        }
        else if(snake.dir == 2){
            nx = snake.x + 1;
            ny = snake.y;
        }
        else if(snake.dir == 3){
            nx = snake.x;
            ny = snake.y - 1;
        }
        else if(snake.dir == 1){
            nx = snake.x;
            ny = snake.y + 1;
        }
        snake.time = 0;
        flag = 1;
        snake.x = nx;
        snake.y = ny;
    }
    if(flag){
        gotoxy(snake.x, snake.y);
        printf("  ");
    }  
    gotoxy(snake.x, snake.y);
    printf("O");
    Sleep(20);
}
void print_apple(void)
{
    gotoxy(apple.x, apple.y);
    printf("  ");

    apple.x = rand() % 26 +1;
    apple.y = rand() % 76 +1;
    
    gotoxy(apple.x, apple.y);
    printf("$");
    Sleep(20);
}