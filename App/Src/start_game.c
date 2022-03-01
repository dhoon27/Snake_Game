#include "../Inc/start_game.h"
#include <stdlib.h>

char map[30][80];

void start_game(void)
{
    system("cls");
    print_border();
    
    init_snake();
    init_apple();

    Sleep(20);
    print_apple();
    Sleep(1000);

    print_snake();
    Sleep(1000);
    /*while(1){
        Sleep(1000);
        gotoxy(30,15);
        printf("  ");

        gotoxy(30, 15);
        printf("  ");

        gotoxy(30, 15);
        printf("$");
    }*/
    

    while (1) {
        Sleep(20);
        snake.time++;
        Sleep(50);
		if (GetAsyncKeyState(VK_UP) & 0x8000) {
			snake.dir = 0;
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
            snake.dir = 2;
		}
		if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
			snake.dir = 3;
		}
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
			snake.dir = 1;
		} 
        print_snake();
	}
}