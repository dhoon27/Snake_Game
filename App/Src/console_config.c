#include "../Inc/console_config.h"
#include <stdio.h>

void gotoxy(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x,y };
	SetConsoleCursorPosition(consoleHandle, pos);
}
void draw_x(int x,int y, int cnt, char c)
{
	gotoxy(x, y);
	for (int i = 0; i < cnt; i++) {
		printf("%c", c);
	}
	gotoxy(0, 35);
}
void draw_y(int x, int y, int cnt, char c)
{
	for (int i = 0; i <= cnt; i++) {
		gotoxy(x, y+i);
		printf("%c", c);
	}
	gotoxy(0, 35);
}
void print_border(void)
{
	draw_x(0, 0, 80,'*');
	draw_y(0, 0, 30, '*');
	draw_x(0, 30, 80, '*');
	draw_y(80, 0, 30, '*');
}
void hidecursor(void)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 1;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);
}
void console_init(void)
{
	system("mode con cols=81 lines=40 | title Snake_game");
	hidecursor();
	print_border();
	//system("clear");
}
