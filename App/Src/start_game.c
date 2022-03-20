#include <stdlib.h>
#include <time.h>
#include "../Inc/start_game.h"
#include "../Inc/console_config.h"

char map[MAX_X][MAX_Y];

void start_game(void)
{
    /*int ngx[5] = {1, 2, 77, 78, 79}; //2~78 
    int ngy[5] = {1, 1, 28, 28, 28}; //2~28
    for(int i=0;i<5;i++){
        Sleep(1000);
        print_apple(ngx[i],ngy[i]);


        Sleep(1000);
        print_delete(ngx[i],ngy[i]);
    }*/

    system("cls");
    print_border();
    
    srand(time(0));

    init_stage();
    init_apple();
    init_snake();
    
    int cnt =0;
    int nx,ny;

    int ms = stage.delay * MAKE_MS * 10;
    while(ms > 0){
        ms--;
        print_snake(snake.x, snake.y);
        delay_ms(stage.delay* MAKE_MS);

        print_delete(snake.x, snake.y);
        delay_ms(stage.delay* MAKE_MS);
    }
    // while(1){
    //     if(check_pos(snake.x, snake.y)){
    //         delay_ms(2000 * MAKE_MS);
    //         return;
    //     }

    //     print_snake(snake.x, snake.y);
    // 	enter_key();
        
    // }

}