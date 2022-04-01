#include <stdlib.h>
#include <time.h>
#include "../Inc/start_game.h"
#include "../Inc/console_config.h"

char map[MAX_X][MAX_Y];

void start_game(void)
{
    system("cls");
    print_border();
    
    srand(time(0));

    init_stage();
    make_apple();
    init_snake();
    
    int cnt =0;
    int nx,ny;

    while(1){
        checking();
        print_snake(snake.x, snake.y);
        enter_key();
        print_delete(snake.x, snake.y);
        next_snake();

    }
}