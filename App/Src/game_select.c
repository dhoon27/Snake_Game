#include "../Inc/game_select.h"

void game_select(void)
{
	const int x = 35;
	int y=18;

	while (1) {
		if (GetAsyncKeyState(VK_UP) & 0x8000) {
			if (y == 20) {
				gotoxy(x, y);
				printf("  ");
				y = 18;
			}
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
			if (y == 18) {
				gotoxy(x, y);
				printf("  ");
				y = 20;
			}
		}
		if (GetAsyncKeyState(VK_RETURN) & 0x8000) { //enter
			if (y == 18) {
				gotoxy(x, y);
				printf(" ");
				start_game();	
			}
			else if (y == 20) {
				Sleep(500);
				exit(0);
			}
		}
		gotoxy(x, y);
		printf("#");
		Sleep(30);
	}

}