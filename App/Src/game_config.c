#include "../Inc/game_config.h"
#include "../Inc/print_game.h"


int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

void delay_ms(int ms)
{
    while(ms > 0){
        ms--;
    }
}
void init_stage(void)
{
    stage.idx = 1;
    stage.delay = 1000;
}
void init_apple(void)
{
    int x = -1, y= -1;
    while(check_pos(x, y)){
        x = rand() % 76 + 2;
        y = rand() % 26 + 2;
    }
    apple.x = x;
    apple.y = y;

    print_apple(apple.x, apple.y);
}
void init_snake(void)
{
    int x = -1, y= -1;
    while(check_pos(x, y)){
        x = rand() % 76 + 2;
        y = rand() % 26 + 2;
    }
    snake.x = x;
    snake.y = y;

    snake.dir = rand() % 4;
    snake.length = 1;
    snake.time = 0;
    snake.nx = snake.x;
    snake.ny = snake.y;
}

void enter_key(void)
{
    int ms = stage.delay * MAKE_MS;
    while(ms > 0){
        ms --;
        if ((GetAsyncKeyState(VK_UP) & 0x8000)) {
		    snake.dir = 0;
            delay_ms(ms);
            break;
	    }
        if ((GetAsyncKeyState(VK_RIGHT) & 0x8000)) {
		    snake.dir = 1;
            delay_ms(ms);
            break;
	    }
	    if ((GetAsyncKeyState(VK_DOWN) & 0x8000)) {
            snake.dir = 2;
            delay_ms(ms);
            break;
	    }
	    if ((GetAsyncKeyState(VK_LEFT) & 0x8000)) {
		    snake.dir = 3;
            delay_ms(ms);
            break;
	    }
    }
    print_delete(snake.x, snake.y);
    next_snake();
}
void next_snake(void)
{
    snake.x += (dx[snake.dir] *2);
    snake.y += (dy[snake.dir] *2);    
}
int check_pos(int x, int y)
{
    if(x == -1 || y == -1)
        return 1;
    if(x <= MIN_X || y <= MIN_Y || x >= MAX_X || y >= MAX_Y)
        return 1;
    return 0;
}