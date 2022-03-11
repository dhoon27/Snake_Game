#include "../Inc/start_game.h"
#include <stdlib.h>

char map[30][80];

void start_game(void)
{
    system("cls");
    print_border();
    
    init_snake();
    init_apple();

    int gx = 10, gy = 20;
    int ngx = gx, ngy = gy;
    while(1){
        gotoxy(gx , gy);
        printf("$");
        Sleep(1000);

        gotoxy(gx, gy);
        printf(" ");
        Sleep(1000);

        gx = rand() % 26 + 1;
        gy = rand() % 76 + 1;

    }
    // apple.x = rand() % 26 +1;
    // apple.y = rand() % 76 +1;
    
    // gotoxy(apple.x, apple.y);
    // printf("$");
    // Sleep(20);

    // Sleep(20);
    // print_apple();
    // Sleep(1000);

    // print_snake();
    // Sleep(1000);
    /*while(1){
        Sleep(1000);
        gotoxy(30,15);
        printf("  ");

        gotoxy(30, 15);
        printf("  ");

        gotoxy(30, 15);
        printf("$");
    }*/
    

    // while (1) {
    //     Sleep(20);
    //     snake.time++;
    //     Sleep(50);
	// 	if (GetAsyncKeyState(VK_UP) & 0x8000) {
	// 		snake.dir = 0;
	// 	}
	// 	if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
    //         snake.dir = 2;
	// 	}
	// 	if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
	// 		snake.dir = 3;
	// 	}
    //     if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
	// 		snake.dir = 1;
	// 	} 
    //     print_snake();
	// }
}